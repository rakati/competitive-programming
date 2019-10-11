#include <stdio.h>


int main()
{
    int m[14] = {4,7,44,77,47,74,444,447,474,744,477,747,774,777};
    int res;
    int i;

    i = 0;
    scanf("%d", &res);
    while (i < 14)
    {
        if (res % m[i] == 0){
            printf("YES\n");
            return 0;
        }
        i++;
    }
    printf("NO\n");
    return 0;
}