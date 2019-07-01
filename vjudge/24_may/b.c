#include <stdio.h>
#include <string.h>

int main()
{
    char scale[54];
    char input[27];
    int l1, l2, l;
    scanf("%s", scale);
    scanf("%s", input);
    l1 = 0;
    while (scale[l1] != '|')
        l1++;
    l2 = 0;
    while (scale[l1 + l2 + 1])
        l2++;
    l = strlen(input);
    if (l + l1 != l2 && l1 != l + l2)
        printf("Impossible");
    else if (l + l1 == l2){
        for (int i = 0; i < l1; i++)
            printf("%c", scale[i]);
        printf("%s", input);
        printf("%c", scale[l1]);
        for (int i = l1 + 1; i < l1 + l2 + 1; i++)
            printf("%c", scale[i]);
    }
    else{
        for (int i = 0; i < l1; i++)
            printf("%c", scale[i]);
        printf("%c", scale[l1]);
        for (int i = l1 + 1; i < l1 + l2 + 1; i++)
            printf("%c", scale[i]);
        printf("%s", input);
    }
    printf("\n");
    return 0;
}