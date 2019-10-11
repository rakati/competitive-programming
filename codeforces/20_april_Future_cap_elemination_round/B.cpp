#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char t[100001];

    cin >> t;
    int i = 0;
    int a = 0;
    while (t[i] != '\0')
        if (t[i++] == 'a') a++;
    int lens = (i + a) / 2;
    if ((a + i) % 2 != 0)
    {
        cout << ":(" << endl;
        return 0;
    }
    int lensp = lens - a;
    i = 0;
    int j = 0;
    while (i < lens)
    {
        if (t[i] == 'a') i++;
        else if (t[i] != t[j + lens]){
            cout << ":(" << endl;
            return 0;
        }else{
            i++;
            j++;
        }
    }
    if (j != lensp) cout << ":(" << endl;
    else
    {
        i = 0;
        while (i < lens) cout << t[i++];
    }
    return 0;
}