#include <bits/stdc++.h>

using namespace std;
#define RP(i,n) for(int i = 0; i < n; i++)

typedef long long ll;

//int dp()

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int v[n];
    if(n == 3)
    {
        int a,b,c;
        cin >>a>>b>>c;
        cout <<(a|(b&c));
    }
    else
    {
        int m = 0;
        int index = 1;
        RP(i,n) 
        {
            cin >> v[i];
            if(i != 0 && i != n-1)
            {
                if(m < v[i] && n - i > 2)
                {
                    m = v[i];
                    index = i;
                }
            }
        }
        cout <<(v[index] | (v[index+1] & v[index+2]));
    }
    return 0;
}