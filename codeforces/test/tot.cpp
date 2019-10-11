#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    int min, max;
    int k;
    
    cin >> n >> m;
    k = n / m;
    min = (k * (k - 1)) / 2;
    if (n % m == 0)
        min *= m;
    else{
        min *= m - 1;
        k += n % m;
        min += (k * (k - 1)) / 2;
    }
    k  = n - (m - 1);
    max = (k * (k - 1)) / 2;
    cout << min << " " << max << endl;
    return 0;
}