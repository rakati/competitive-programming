#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
// min + d = max
int ft_1simple_max(vector<int> v , int n)
{
    int d = v[n - 1] - v[0];
    for (int i = 0; i < n; i++)
        if (v[i] + d != v[n - 1] && v[i] != v[n-1])
            return -1;
    return d;
}

int ft_1simple_min(vector<int> v , int n)
{
    int d = v[n - 1] - v[0];
    for (int i = 0; i < n; i++)
        if (v[i] - d != v[0] && v[i] != v[0])
            return -1;
    return d;
}

int ft_2simple(vector<int> v , int n)
{
    int mid = (v[n - 1] + v[0]) / 2;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != mid)
        {
            if (v[i] > mid) d = v[i] - mid;
            else d = mid - v[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] + d != mid && v[i] - d != mid && v[i] != mid)
            return -1;
    }
    return d;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    int d;
    if ((d = ft_2simple(v , n)) != -1)
        cout << d << endl;
    else if ((d = ft_1simple_min(v , n)) != -1)
        cout << d << endl;
    else if ((d = ft_1simple_max(v , n)) != -1)
        cout << d << endl;
    else
        cout << -1 << endl;
    return 0;
}