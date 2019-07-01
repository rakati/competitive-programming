#include <stdio.h>
#include <stdlib.h>


int     recursif_xor(int x, int **t, int *res, int pn, int n, int m)
{
    for (int i = 0; i < m; i++)
    {
        res[pn] = i + 1;
        x ^= t[pn][i];
        if (pn + 1 < n)
        {
            if (recursif_xor(x, t, res, pn + 1, n, m) == 1) return 1;
            else return (0);
        }
        if (pn + 1 ==  n && x > 0) return (1);
    }
    return 0;
}

int main()
{
    int n,m;
    int pn;
    scanf("%d %d", &n, &m);
    int **t;
    t = (int**)malloc(sizeof(int*)  * (n));
    for (int i = 0; i < n; i++) t[i] = (int*)malloc(sizeof(int)  * (m));
    int res[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) scanf("%d", &t[i][j]);
    pn = 0;
    if (recursif_xor(0, t, res, pn, n, m) == 1)
    {
        printf("TAK\n");
        printf("%d", res[0]);
        for (int i = 1; i < n; i++) printf("%d ", res[i]);
    }
    else printf("NIE\n");
    return 0; 
}