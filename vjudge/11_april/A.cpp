#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n,k;

    cin >> n >> k;
    for (int i = k - 1; i >= 0; i--)
    {
        if ((n * k) % i == 0)
        {
            cout << (n * k) / i << endl;
            break;
        }
    }

    return 0;
}