#include <cstdio>

int main()
{
    int n;
    char c1,c2;

    scanf("%d", &n);
    printf("%d\n", (n * n) / 2 + ((n % 2) ? 1 : 0));
    for(int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            c1 = 'C';
            c2 = '.';
        }
        else
        {
            c1 = '.';
            c2 = 'C';
        }

        for(int j = 0; j < n; j++)
        {
            printf("%c", c1);
            j++;
            if (j >= n)
                break;
            printf("%c", c2);
        }
        printf("\n");
    }

    return 0;
}