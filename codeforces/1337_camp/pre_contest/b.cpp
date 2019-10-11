#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>

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
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("azuz.in", "r", stdin);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<vvi> node(n);
        vector<bool> vis(n);
        vi level(n);
        RP(i,0,n - 1){
            int x,y;
            cin >> x >> y;
            node[x - 1].PB(y - 1);
            node[y - 1].PB(x - 1);
        }
        queue<int> q;
        q.push(0);
        level[0] = 0;
        vis[0] = true;
        while (!q.empty()){
            int p = q.front();
            q.pop();
            RP(i,0,node[p].size()){
                if (vis[ node[p][i] ] == false){
                        level[ node[p][i]] = level[p] + 1;
                        q.push( node[p][i] );
                        vis[node[p][i]] = true;
                }
            }
        }
        if (count(level.begin(), level.end(), *max_element(level.begin(), level.end())) > 1) cout << "it was a trap!\n";
        else{
            int pos = distance(level.begin(), find(level.begin(), level.end(), *max_element(level.begin(), level.end())));
            cout << pos + 1 << '\n';
        }
    }
    return 0;
}