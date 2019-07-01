#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

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
#define MOD 10000000007

struct triple{
    int t,l,r;
    bool operator<(const triple &tr) const{
        if (this->l == tr.l) return this->r < tr.r;
        return this->l < tr.l;
    }
};

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    vi v(n);
    set<triple> seq;
    triple tr;
    cin >> tr.t >> tr.l >> tr.r;
    seq.insert(tr);
    RP(i,0,m - 1){
        cin >> tr.t >> tr.l >> tr.r;
        if (seq.rbegin()->r > tr.l && seq.rbegin()->t != tr.t) {cout << "NO\n"; return 0;}
        if (seq.rbegin()->l == tr.r && seq.rbegin()->t == tr.t) seq.rbegin()->l = tr.l;
        else seq.insert(tr);
    }
    
    return 0;
}