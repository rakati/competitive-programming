#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    if (n == 3 || n == 2) cout << "NO SOLUTION";
    else if (n & 1){
        cout << 1;
        for (int i = 3; i <= n; i += 2) cout << ' ' << i;
        for (int i = 2; i <= n; i += 2) cout << ' ' << i;
    }else {
        cout << 2;
        for (int i = 4; i <= n; i += 2) cout << ' ' << i;
        for (int i = 1; i <= n; i += 2) cout << ' ' << i;
    }
    cout << '\n';
    return 0;
}