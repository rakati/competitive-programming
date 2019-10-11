#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    vector<char> b (n * n + 1);
    for(int i = 0; i < n*n; i++)
        b[i] = '.';
    for(int i = 0; i < n*n; i += 2)
        b[i] = 'C';
    cout << (n * n  / 2)+ (n % 2 == 0 ? 0 : 1) << endl;
    for(int i = 0; i < n; i++)
    {
        for (int j = i; j < n + i; j++)
            cout << b[j];
        cout << endl;
    }
    return 0;
}