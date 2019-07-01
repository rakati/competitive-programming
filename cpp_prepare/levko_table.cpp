#include <cstdio>

void       print_row(int s, int *l, int size)
{
    int i = s + 1;
    printf("%d", l[s]);
    while (i < size)
        printf(" %d", l[i++]);
    i = 0;
    while (i < s)
        printf(" %d", l[i++]);
    printf("\n");
}

int main()
{
    int n,k;

    scanf("%d %d", &n, &k);
    int l[n];
    l[0] = k;
    for(int i = 1; i < n; i++)
        l[i] = 0;
    for(int i = 0; i < n; i++)
        print_row(i, l, n);
    return 0;
}