#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,m;
    
    cin >> n >> m;
    bool a[n * m + 1];
    bool b[n * m + 1];
    int p[4] = {0,0,0,0};
    for(int i = 0; i < n * m; i++)
        cin >> a[i];
    for(int i = 0; i < n * m; i++)
        cin >> b[i];
    int k = 0;
    for(int i = 0; i < n && k < 4; i++)
    {
        for(int j = 0; j < m && k < 4; j++)
        if(a[i + j] != b[i + j])
        {
            p[k] = j;
            k++;
        }
    }
    if (p[0] == p[2] && p[1] == p[3] && k == 4)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}