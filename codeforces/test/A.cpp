#include <iostream>

using namespace std;

int main()
{
    int n;
    
    cin >> n;
    int t[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];
    int i = 0, j = n - 1;
    while (n--)
    {
        if (t[i] != t[i + n])
        {
            cout << n << endl;
            break;
        }
        if (t[j] != t[j - n])
        {
            cout << n << endl;
            break;
        }
    }
    return 0;
}