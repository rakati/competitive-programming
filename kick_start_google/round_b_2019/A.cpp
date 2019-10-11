#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;

    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n,q;
        cin >> n >> q;
        char str[n + 1];
        for (int j = 0; j < n; j++) cin >> str[j];
        str[n] = '\0';
        int res = 0;
        for (int j = 0; j < q; j++)
        {
            int s,e;
            cin >> s >> e;
            int x = 0;
            if (s == e) x = 0;
            else
                while (s <= e){
                    x ^= (str[s - 1]);
                    s++;
                }
            if (x == 0 || (x >= 'A' && x <= 'Z')) res++;
        }
        cout << "Case #" << i << ": " << res << endl;
    }
    return 0;
}