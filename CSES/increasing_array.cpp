#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, min = 0;
    long long prev;
    long long next;
    cin >> n;
    cin >> prev;
    for(int i = 0; i < n - 1; i++){
        cin >> next;
        if (prev > next) min += prev - next;
        else prev = next;
    }
    cout << min << '\n';
    return 0;
}