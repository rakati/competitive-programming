#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_set>
#include <queue>
#include <map>

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
    freopen("alice.in", "r", stdin);
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        unordered_set<int> v;
        vvi dis(n);
        RP(i,0,n) v.insert(i);
        RP(i,0,m){
            int x,y;
            cin >> x >> y;
            x--,y--;
            dis[x].PB(y);dis[y].PB(x);
        }
        int  s,d;
        cin >> s >> d;
        s--,d--;
        vi dist(n,0);
        queue<int> q;
        dist[s] = 0;
        q.push(s);
        v.erase(s);
        while (!q.empty()){
            int e = q.front();
            q.pop();
            for (unordered_set<int>::iterator it = v.begin(); it != v.end();it++){
                if (find(dis[e].begin(), dis[e].end(), *it) == dis[e].end()){
                    dist[*it] = dist[e] + 1;
                    if (*it == d) break;
                    q.push(*it);
                    v.erase(*it);
                }
            }
            if (dist[d] != 0) break;
        }
        cout << (dist[d] == 0 ? -1 : dist[d]) << '\n';
    }
    return 0;
}