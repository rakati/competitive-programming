#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,m,d;
    int c;

    scanf("%d %d", &n, &m);
    d = n;
    c = 0;
    while (d > 0 && m / d <= n)
    {
        if (m % d == 0)
            c++;
        d--;
    }
    printf("%d", c);
    return 0;
}