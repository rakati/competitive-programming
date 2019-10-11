#include <stdio.h>
#include <cassert>
#include <algorithm>
#include <vector>
#include <random>
#include <chrono>
#include <string>
 
typedef unsigned long long ull;
 
// Generate random base in (before, after) open interval:
int gen_base(const int before, const int after) {
    auto seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    std::mt19937 mt_rand(seed);
    int base = std::uniform_int_distribution<int>(before+1, after)(mt_rand);
    return base % 2 == 0 ? base-1 : base;
}

struct PolyHash {
    // -------- Static variables --------
    static const int mod = (int)1e9+123; // prime mod of polynomial hashing
    static std::vector<int> pow1;        // powers of base modulo mod
    static std::vector<ull> pow2;        // powers of base modulo 2^64
    static int base;                     // base (point of hashing)
 
    // --------- Static functons --------
    static inline int diff(int a, int b) { 
    	// Diff between `a` and `b` modulo mod (0 <= a < mod, 0 <= b < mod)
        return (a -= b) < 0 ? a + mod : a;
    }
 
    // -------------- Variables of class -------------
    std::vector<int> pref1; // Hash on prefix modulo mod
    std::vector<ull> pref2; // Hash on prefix modulo 2^64
 
    // Cunstructor from string:
    PolyHash(const std::string& s,const int n)
        : pref1(n+1u, 0)
        , pref2(n+1u, 0)
    {
        assert(base < mod);
        while ((int)pow1.size() <= n) {
            pow1.push_back(1LL * pow1.back() * base % mod);
            pow2.push_back(pow2.back() * base);
        }
        for (int i = 0; i < n; ++i) { // Fill arrays with polynomial hashes on prefix
            assert(base > s[i]);
            pref1[i+1] = (pref1[i] + 1LL * s[i] * pow1[i]) % mod;
            pref2[i+1] = pref2[i] + s[i] * pow2[i];
        }
    }
 
    // Polynomial hash of subsequence [pos, pos+len)
    // If mxPow != 0, value automatically multiply on base in needed power. Finally base ^ mxPow
    inline std::pair<int, ull> operator()(const int pos, const int len, const int mxPow = 0) const {
        int hash1 = pref1[pos+len] - pref1[pos];
        ull hash2 = pref2[pos+len] - pref2[pos];
        if (hash1 < 0) hash1 += mod;
        if (mxPow != 0) {
            hash1 = 1LL * hash1 * pow1[mxPow-(pos+len-1)] % mod;
            hash2 *= pow2[mxPow-(pos+len-1)];
        }
        return std::make_pair(hash1, hash2);
    }
};
 
// Init static variables of PolyHash class:
int PolyHash::base((int)1e9+7);    
std::vector<int> PolyHash::pow1{1};
std::vector<ull> PolyHash::pow2{1};
 
int main() {
    char buf[1+100000];
    scanf("%1000010s", buf);
    std::string a(buf);
    scanf("%1000010s", buf);
    std::string b(buf);
     const int mxPow = std::max((int)a.size(), (int)b.size());
    PolyHash::base = gen_base(256, PolyHash::mod);
    int n = std::max(a.size(), b.size());
    PolyHash hash_a(a,n), hash_b(b,n);
    int len = 0, low = 0, high = std::min(a.size(), b.size())+1;
    while (high - low > 1) {
        int mid = (low + high) / 2;
        std::vector<std::pair<int,ull>> hashes;
        for (int i = 0; i + mid <= a.size(); ++i) {
            hashes.push_back(hash_a(i,mid,mxPow));
        }
        std::sort(hashes.begin(), hashes.end());
        int p = -1;
        for (int i = 0; i + mid <= b.size(); ++i) {
            if (std::binary_search(hashes.begin(), hashes.end(), hash_b(i, mid, mxPow))) {
                p = i;
                break;
            }
        }
        if (p >= 0) {
            low = mid;
            len = mid;
        } else {
            high = mid;
        }
    }
    assert(len >= 0);
    // Output answer:
    printf("%d\n", len);
 
    return 0;
}