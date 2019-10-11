#include <bits/stdc++.h>

using namespace std;
#define RP(i,n) for(int i = 0; i < n; i++)
typedef long long ll;

int w[100];
int dp[100][100];
int profit(int y, int b, int e){
    if (b > e) return 0;
    if (dp[b][e])
        dp[b][e] = max(profit(y + 1, b + 1, e) + y * w[b], profit(y + 1, b, e - 1) + y * w[e]);
    return dp[b][e];
}

int main(){
    int n;
    cin >> n;
    RP(i,n) cin >> w[i];
    cout << max(profit(2, 1, n - 1) + w[0], profit(2, 0, n - 2) + w[n - 1]) << endl;;
    return 0;
}