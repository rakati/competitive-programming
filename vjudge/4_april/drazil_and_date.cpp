#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int a,b,s;
    int c;

    scanf("%d %d %d", &a, &b, &s);
    if (a < 0)
        a *= -1;
    if (b < 0)
        b *= -1;
    c = s - a - b;
    if (c % 2 == 0 && c >= 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}