#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n,sum,k;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    for (int i = 0; i < n -1; i++){
        cin >> k;
        sum -= k;
    }
    cout << sum << '\n';
    return 0;
}