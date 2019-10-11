#include <iostream>

using namespace std;


int ft_max_days(int a, int b, int c, int d)
{
    int days = 0;
    char w[7] = {'a', 'a', 'b', 'c', 'a', 'c','b'};

    while (d < 7)
    {
        if (w[d] == 'a' && a > 0) a--;
        else if (w[d] == 'b' && b > 0) b--;
        else if (w[d] == 'c' && c > 0) c--;
        else return days;
        d++;
        days++;
    }
    int min;
    min = a / 3;
    if (min > b / 2) min = b / 2;
    if (min > c / 2) min = c / 2;
    days += 7 * min;
    a -= min * 3;
    b -= min * 2;
    c -= min * 2;
    d = 0;
    
    while (d < 7)
    {
        if (w[d] == 'a' && a > 0) a--;
        else if (w[d] == 'b' && b > 0) b--;
        else if (w[d] == 'c' && c > 0) c--;
        else return days;
        d++;
        days++;
    }
    return days;
}

int main()
{
    int a,b,c;
    int days = 0, s;
    cin >> a >> b >> c;
    for (int i = 0; i < 7; i++)
    {
        s = ft_max_days(a,b,c,i);
        if (s > days)
            days = s;
    }
    cout << days << endl;
    return 0;
}