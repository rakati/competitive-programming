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
#define MOD 1000000007

vi res(25010);
 
void    dfs(vvi &v, vb &vis, int s){
    vis[s] = true;
    res[s] = 1;
    RP(i,0,v[s].size())
        if (!vis[ v[s][i]])
            {dfs(v,vis, v[s][i]);res[s] += res[v[s][i]];}
}
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vvi v(n);
    vb vis(n);
    int r;
    RP(i,0,n){
        int x;
        cin >> x;
        if (x == -1) r = i;
        else {v[i].PB(x - 1); v[x - 1].PB(i);}
    }
    dfs(v, vis, r);
    RP(i,0,n) cout << res[i] << '\n';
    return 0;
}