#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

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
    int n,m,k;
    while (scanf("%d %d %d", &n, &m, &k) != EOF){
        int dp[n][m];
        RP(i,0,n) RP(j,0,m) dp[i][j] = 0;
        int b[n + 1][m + 1];
        dp[0][0] = 1;
        RP(i,0,n) RP(j,0,m) cin >> b[i][j];
        RP(i,0,n)
            RP(j,0,m){
                if (b[i][j] > k) dp[i][j] = 0;
                else{
                    if (i - 1 >= 0) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
                    if (j - 1 >= 0) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
                } 
            }
        cout << dp[n - 1][m - 1] << '\n';
    }
    return 0;
}