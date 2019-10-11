#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m,c;

    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    cin >> m;
    vector<int> g(m);
    for (int i = 0; i < m; i++)
        cin >> g[i];

    sort(b.begin(), b.end());
    sort(g.begin(), g.end());

    vector<int>:: iterator itr = g.begin();

    itr = g.begin();
    c = 0;
    for (int i = 0; i < n; i++)
        while(itr != g.end() && *itr >= b[i] + 1)
        {
            if (b[i] == *itr - 1 || b[i] == *itr + 1 || b[i] == *itr)
            {
                c++;
                break;
            }
            itr++;
        }
    
    cout << c << endl;
}