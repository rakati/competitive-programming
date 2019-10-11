#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct stone 
{ 
   int s, e, l; 
};

int main()
{
    int t,res;

    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        vector<stone> v;
        for(int i = 1; i <= t; i++) cin >> v[i].s >> v[i].e >> v[i].l;
        
        cout << "Case #" << i << ": " << res << endl;
    }
    return 0;
}