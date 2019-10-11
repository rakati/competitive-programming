#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n,b,acc;
    cin >> n >> b >> acc;
    int a = acc;
    vector<char> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == '0')
        {
            if (a > 0) a--;
            else if (b > 0) b--;
            else break;
        }
        else
        {
            if (a == acc) a--;
            else if (b > 0)
            {
                b--;
                if (a < acc) a++;
            }
            else if (a > 0) a--;
            else break;
        }
        res++;
    }
    cout << res << endl;
    
    return 0;
}