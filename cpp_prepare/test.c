#include <stdio.h>


int main()
{
    int n, k;
    int res = 0;
    int j, c;
    char buffer[10];

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", buffer);
        c = 0;
        j = 0;
        while (buffer[j])
        {
            if (buffer[j] == '4' || buffer[j] == '7')
                c++;
            j++;
        }
        if (c <= k)
            res++;
    }
    printf("%d\n", res);

    return 0;
}