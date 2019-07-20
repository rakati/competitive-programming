#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<int, int> vii;
typedef vector<ll> vl;
typedef vector<ll, ll> vll;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector< vi > vvi;
typedef vector< vl > vvl;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define RP(i,a,n) for(int i = a; i < n; i++)
#define MOD 10000000007

int main(){
    
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("vertex.in", "r", stdin);
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        vector< pair<int, vi> > tree(n + 1);
        RP(i,0,n-1){
            int x,y;
            cin >> x >> y;
            tree[x].F = 0;
            tree[x].S.PB(y);
            tree[y].S.PB(x);
        }
        RP(i,0,m){
            int c,x,y;
            cin >> c >> x;
            if (c == 1) cout << tree[x].F << '\n';
            else{
                cin >> y;
                for (const auto& t : tree[x].S) tree[t].F += y;
            }
        }
    }
    return 0;
}