#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--){
        int a, b,c;
        cin >> a >> b >> c;
        vector <long long> all(a);
        for (int i = 0; i < a;i++)
            cin >> all[i];
        sort(all.begin(), all.end());
        int g = 0;
        int f = 0;
        int gs = 1;
        for(int i = 1; i < a; i++)
        {
            gs++;
            if (all[i] - all[f] > c || gs > b)
            {
                f = i;
                gs = 1;
                g++;
            }
        }
        cout << g + 1 << '\n';
    }
}