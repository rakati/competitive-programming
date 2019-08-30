#include <bits/stdc++.h>

using namespace std;

double dp[1010][1010];

int main(){
    int t;
    cin >> t;
    memset(dp,0, sizeof(dp));
    for (int i = 0; i <= 1000; i++)
            for (int j = 0; j <= 1000; j++){
                if (i == 0) {dp[i][j] = 1.0; continue;}
                if (j == 0) {dp[i][j] = 1.0; continue;}
                dp[i][j] = i * 1.0 / (i + j) + (j * 1.0 / (i + j)) * ((j - 1) * 1.0 / (i + j - 1)) * dp[i][j - 2];
            }
    while (t--){
        int r, g;
        cin >> r >> g;
        cout << fixed << setprecision(6) << dp[r][g] << '\n';
    }
    return 0;
}