#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
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

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,e;
    cin >> n >> e;
    vvi v(n);
    RP(i,0,e){
        int x,y;
        cin >> x >> y;
        v[x].PB(y);
        v[x].PB(y);
    }
    vb vis(n);
    queue<int> q;
    q.push(0);
    vis[0] = true;
    while (!q.empty()){
        int ov = q.front();
        q.pop();
        for (int i = 0; i < v[ov].size(); i++){
            
        }
    }
    return 0;
}