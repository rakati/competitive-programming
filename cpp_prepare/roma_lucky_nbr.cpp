#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int res;
    int n,k;
    char buffer[10];
    int j,c;

    scanf("%d %d", &n, &k);
    ios::sync_with_stdio(false);
    res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> buffer;
        j = 0;
        c = 0;
        while (buffer[j])
        {
            if (buffer[j] == '4' || buffer[j] == '7')
                c++;
            j++;
        }
        if (c <= k)
            res++;
    }
    cout << res << '\n';
    return 0;
}