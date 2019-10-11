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
#define MOD 1000000007


int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    vvi v(n);
    RP(i,0,m){
        int x,y;
        cin >> x >> y;
        x--,y--;
        v[x].PB(y);
        v[y].PB(x);
    }
    vi vis(n);
    vi subg;
    RP(i,0,n){
        if(!vis[i]){
            subg.PB(i);
            queue<int> q;
            q.push(i);
            while (!q.empty()){
                int e = q.front();
                q.pop();
                for(int p : v[e]){
                    if (!vis[p]){
                        vis[p] = true;
                        q.push(p);
                    }
                }
            }
        }
    }
    cout << subg.size() - 1 << '\n';
    RP(i,0,subg.size() - 1) cout << subg[i] +1 << ' ' << subg[i + 1] + 1 << '\n';
    return 0;
}