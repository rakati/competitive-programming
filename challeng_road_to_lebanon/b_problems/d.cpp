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
#define RP(i,a,n) for(size_t i = a; i < n; i++)
#define MOD 10000000007

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int res = 0;
    while (s.size() > 1){
        ll d = 0;
        RP(i,0,s.size()) d += s[i] - '0';
        s = to_string(d);
        res++;
    }
    cout << res << '\n';
    return 0;
}