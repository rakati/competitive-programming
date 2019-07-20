#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<int, int> vii;
typedef vector<ll> vl;
typedef vector<ll, ll> vll;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector< vi > vvi;
typedef vector< vl > vvl;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define RP(i,a,n) for(int i = a; i < n; i++)
#define MOD 1000000007

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k; cin >> n >> k;
    string s; cin >> s;

    int l = 0,r = 0;
    vi d(2,0);
    int res = 1;
    while (r < n){
        d[s[r] - 'a']++;
        while (d[0] > k && d[1] > k && l < n){
            d[s[l] - 'a']--;
            l++;
        }
        res = max(res, r - l + 1);
        r++;
    }
    cout << res << '\n';
    return 0;
}