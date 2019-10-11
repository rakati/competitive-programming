#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    int e, o;
    int res;

    scanf("%d", &n);
    e = 0;
    o = 0;
    int t[n];
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        if (t[i] % 2)
            o++;
        else
            e++;
    }
    if (e > o)
    {
        for (int i = 0; i < n; i++)
        {
            if (t[i] % 2){
                cout << i + 1 << endl;
                break;
            }
        }
    }else{
        for (int i = 0; i < n; i++)
        {
            if (t[i] % 2 == 0){
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}