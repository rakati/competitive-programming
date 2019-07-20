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
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    vi dp(s.length() + 2,0);
    if(s[0] == s[1]) dp[1] = 1;
    RP(i,1,s.length() + 2) dp[i + 1] = dp[i] + (s[i] == s[i + 1] ? 1 : 0);
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;r--,l--;
        cout << dp[r] - dp[l] << '\n';
    }
    return 0;
}