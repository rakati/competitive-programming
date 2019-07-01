#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int k;
    int c;
    vector<int> v (12);

    cin >> k;
    for(int i = 0; i < 12; i++)
    {
        int hold;
        cin >> hold;
        v.push_back(hold);
    }
    sort(v.begin(), v.end());
    c = 0;
    for (int i = 11; i >= 0 && k >= 0; i--)
    {
        k -= v[i];
        c++;
    }
    cout << c << endl;
    return 0;
}