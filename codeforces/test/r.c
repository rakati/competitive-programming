#include <stdio.h> 
#include <string.h>
int main()
{
    char s1[100001];
    char s2[31];
    char *p;
    int c = 0;
    int l;
    

    scanf("%s", s1);
    scanf("%s", s2);
    p = s1;
    l = strlen(s2);
    while ((p = strstr(p, s2)))
    {
        p += l;
        c++;
    }
    printf("%d", c);
}