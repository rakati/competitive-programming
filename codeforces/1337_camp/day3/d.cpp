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
const int INF = 1 << 30;
string s;

int f(int i, int take, int n) {
    if(i >= n) {
        return (take == (1 << 3) - 1) ? 0: INF;
    }

    if(memo[i][take] != -1) return memo[i];
    int ans = f(i + 1, take,n);
    vector<bool> other(take);
    int new_take = take;
    for(char c: s[i]) {
        int index = s[i] - 'A';
        new_take |= (1 << index);
    }
    memo[i][take] = min(
        f(i + 1, take) + val[i],
        ans
    );
    return memo[i][take] = ans;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    int l = s.length();
    int res = 0;
    
    int ans = f(0, 0, l);
    if(ans >= INF) cout << -1 << endl;
    else cout << ans << endl;
    cout << res << '\n';
    return 0;
}