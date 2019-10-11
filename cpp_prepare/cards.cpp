#include <cstdio>


int main()
{
    int n;
    int sum = 0;

    scanf("%d", &n);
    int l[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", l + i);
        sum += l[i];
    }
    sum =  sum / (n / 2);
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (l[i] + l[j] == sum)
            {
                l[j] = 0;
                printf("%d %d\n", i + 1, j + 1);
                break;
            }
        }
    }
    return 0;
}