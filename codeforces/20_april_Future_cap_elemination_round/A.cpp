#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char s[51];

    cin >> s;
    int i = 0;
    int a = 0;
    while (s[i] != '\0')
        if (s[i++] == 'a') a++;
    if ((a * 2) > i) cout << i << endl;
    else cout << (a * 2) - 1 << endl;
    return 0;
}