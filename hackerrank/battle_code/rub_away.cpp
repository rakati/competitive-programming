#include "stdc++.h"

using namespace std;
void        print_res(vector<int> max)
{
    int s = sizeof(max) / sizeof(max[0]);
    cout << s - 2 << "elements | w = " << max[0] << " I = " << max[1] << endl;
    for (int i = 2; i < s; i++) cout << max[i] + 1 << endl;
}
void        max_in(vector< pair <int,int> > v, int size, int w, int p, vector<int> max, vector<int> curr)
{
    for (int i = p;i < size; i++)
    {
        print_res(curr);
        if (curr[0] + v[p + i].first > w)
        {
            if (curr[1] > max[1]) max = curr;
            return ;
        }
        curr.push_back(p + i);
        curr[0] += v[p + i].first;
        curr[1] += v[p + i].second;
        max_in(v, size - 1, w, p + i, max,curr);
    }
    if (curr[1] > max[1]) max = curr;
}

int main()
{
    int o,q;
    cin >> o >> q;
    vector< pair <int,int> > v(o);
    // weight
    for (int i = 0;i < o; i++) cin >> (v[i].first);
    // importance
    for (int i = 0;i < o; i++) cin >> (v[i].second);
    vector<int> max;
    vector<int> curr;
    max.push_back(0);
    curr.push_back(0);
    max.push_back(0);
    curr.push_back(0);
    max_in(v, o, q, 0, max,curr);
    return 0;
}