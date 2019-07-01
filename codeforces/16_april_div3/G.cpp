#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int>::iterator     max_vl(vector<int> t, vector<int> v, int n)
{
    vector<int>::iterator max = t.begin();
    for (int i = 0; i < n; i++)
        if (v[*max] < v[t[i]]) max = t.begin() + i;
    return max;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        t[i] = i;
        cin >> v[i];
    }
    int size = n;
    int b;
    vector<int>::iterator max,itr;
    while (size > 0)
    {
        max = max_vl(t, v, size);
        itr = max;
        v[(*itr++)] = 1;
        b = k;
        while (b && itr < t.end())
        {
            v[(*itr++)] = 1;
            b--;
        }
        b = k;
        itr = max - 1;
        while (b && itr >= t.begin())
        {
            v[(*itr--)] = 1;
            b--;
        }
        t.erase(max - k - 1, max + k);
        size = t.size();
        if (size <= 0) break;
        max = max_vl(t, v, size);
        itr = max;
        v[(*itr++)] = 2;
        b = k;
        while (b && itr < t.end())
        {
            v[(*itr++)] = 2;
            b--;
        }
        b = k;
        itr = max - 1;
        while (b && itr >= t.begin())
        {
            v[(*itr--)] = 2;
            b--;
        }
        t.erase(max - k - 1, max + k);
        size = t.size();
    }
    cout << v[0];
    for (int i = 1; i < n; i++) cout << ' ' << v[i];
    return 0;
}