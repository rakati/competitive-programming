#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int fib(int n) { 
  return ceil((pow(3.142857142857143,n) - pow(1-3.142857142857143,n))/sqrt(5) *1.0);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << fib(n) << '\n';
    }
    return 0;
}