#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
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
#define MOD 1000000007

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector< pair<int, vi > > v(n);    
    RP(i,0,n) cin >> v[i].F;
    RP(i,0, n - 1){
        int x,z;
        cin >> x >> z;
        x--,z--;
        v[x].S.push_back(z);
        v[z].S.push_back(x);
    }
    vb vis(n);
    vi level(n);
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    while(!q.empty()){
        int e = q.front();
        q.pop();
        for(int p : v[e].S){
            if (!vis[p]){
                vis[p] = true;
                level[p] = level[e] + 1;
                q.push(p);
            }
        }
    }
    ll res = 0;
    RP(i,0,n){
        if (level[i] & 1) res += (ll) v[i].F;
    }
    cout << res << endl;
    return 0;
}