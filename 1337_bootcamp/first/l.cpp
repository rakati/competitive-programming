#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    vector< pi > h;
    for(int i = 0; i < n; i++){
        pi p;
        cin >> p.F;
        p.S = 0;
        h.PB(p);
    }
    int t;
    int res = 0;
    do{
        t = 0;
        sort(h.rbegin(), h.rend());
        for(int i = 0; i < n; i++)
            if (h[i].F < k || h[i].S >= 3){
                res += h[i].F;
                h[i].F = 0;
            }else
            {
                h[i].F -= k;
                h[i].S++;
                t++;
            }
    }while(t != 0);
    cout << res << '\n';
    return 0;
}