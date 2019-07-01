#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int days;
    int bowls, plates;
    int buff;
    int t,res;

    scanf("%d %d %d", &days, &bowls, &plates);
    t = 0;
    res = 0;
    for (int i = 0; i < days; i++)
    {
        cin >> buff;
        if (buff == 1)
            bowls--;
        else
            t--;
    }
    if(bowls < 0){
        res += bowls * -1;
        t += plates;
        res = (t < 0) ? (res + t * -1) : (res);
    }else{
        res = (plates + bowls + t) * -1;
    }
    if(res > 0)
        cout << res << endl;
    else
        cout << '0' << endl;
    return 0;
}