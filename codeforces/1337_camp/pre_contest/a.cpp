#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>

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
#define MAX_INT 2147483647

int main(){
    freopen("game.in", "r", stdin);
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        vector< vpii >  v(n);
        RP(i,0,m){
            int x,y,w;
            cin >> x >> y >> w;
            x--,y--;
            v[x].PB(MP(y, w));
            v[y].PB(MP(x, w));
        }
        int nf;
        cin >> nf;
        vi f(nf);
        RP(i,0,nf) {int x; cin >> x; f[i] = x - 1;}
        int sr;
        cin >> sr;
        vi dist(n, MAX_INT);
        deque<int> q;
        q.PB(sr - 1);
        dist[sr - 1] = 0;
        while (!q.empty()){
            int e = q.front();
            q.pop_front();
            RP(i,0,v[e].size()){
                if (dist[ v[e][i].F ] > dist[e] + v[e][i].S){
                    dist[ v[e][i].F ] = dist[e] + v[e][i].S;
                    (v[e][i].S == 0) ? (q.push_front(v[e][i].F)) : (q.push_back(v[e][i].F));
                }
            }
        }
        int min = MAX_INT;
        RP(i,0,nf){
            if (dist[f[i]] < min) min = dist[f[i]];
        }
        cout << min << '\n';
    }
    return 0;
}