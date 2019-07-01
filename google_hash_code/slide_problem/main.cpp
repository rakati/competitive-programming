#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct      s_photo
{
    char            type;
    int             num_tags;
    char            *tags;
    struct s_photo  *next;
}                   t_photo;

t_photo             *new_elem(char type, int num_tags,)
{
    
}

t_photo             *read_input(int n)
{
    int             i = 0;
    t_photo         *photos;

    while (i < n)
    {

    }
    return (photos);
}

int main()
{
    int n;
    t_photo *photos;

    photos = read_input(cin >> n);
    return 0;
}