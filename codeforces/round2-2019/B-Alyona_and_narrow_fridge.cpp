#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, h;

    cin >> n >> h;
    vector<int> f(n);
    for (int i= 0; i < n; i++)
        cin >> f[i];
    for (int i = n; i >= 0; i--)
    {
        vector<int> sub(f.begin(), f.begin() + i);
        sort(sub.begin(), sub.end());
        long long sum = 0;
        for (int j = i - 1; j >= 0; j -= 2)
            sum += sub[j];
        if (sum <= h){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
} 