#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int ft_seach(vector<vector<char> > l, int a, int b,int n , int m)
{
    int c = 0;
    for (int i = 0; i < m; i++)
        if (l[a][b] == l[a][i])
        {
            if (c >= 2)
                return (0);
            else
                c++;
        }
    for (int i = 0; i < n; i++)
        if (l[a][b] == l[i][b])
        {
            if (c >= 2)
                return (0);
            else
                c++;
        }
    return (1);
}

int main()
{
    int n, m;

    cin >> n >> m;
    vector<vector<char> > l(n, vector<char>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> l[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (ft_seach(l, i, j, n, m) == 1)
                cout << l[i][j];

    cout << endl;
    return 0;
}