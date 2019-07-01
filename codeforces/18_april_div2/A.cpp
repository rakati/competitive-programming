#include <iostream>
#include <algorithm>

using namespace std;

// ACTG

int     op_genome(char *s)
{
    int res = 0;
    int diff1, diff2;
    char m[4] = {'A', 'C', 'T', 'G'};
    for (int i = 0; i < 4; i++)
    {
        diff1 = m[i] - s[i];
        if (diff1 < 0) diff1 *= -1;
        if (m[i] < s[i]) diff2 = ('Z' - s[i]) + (m[i] - 'A') + 1;
        else diff2 = (s[i] - 'A') + ('Z' - m[i]) + 1;
        if (diff1 < diff2) res += diff1;
        else res += diff2;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    char s[n + 1];
    for (int i = 0; i < n; i++) cin >> s[i];
    s[n] = '\0';
    int res = 1000;
    for (int i = 0; i < n - 3; i++)
    {
        int t = op_genome(s + i);
        if (t < res) res = t;
    }
    cout << res << endl;
    return 0;
}