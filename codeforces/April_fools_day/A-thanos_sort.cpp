#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int range = n; range > 1; range /= 2)
    {
        for (int i = 0; i <= n - range; i += range)
            if (is_sorted(a + i, a + i + range))
            {
                cout << range << endl;
                return 0;
            }
    }
    cout << '1' << endl;
    return 0;
}