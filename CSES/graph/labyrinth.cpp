/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << d;cout << '\n';}
#define ALL(x) x.begin(),x.end()
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

const double EPS = 1e-9;
const double PI = 2 * acos(0.0);
const int INF = 1e9;

using ll    = long long;
using ull   = unsigned long long;
using vi    = vector<int>;
using vl    = vector<ll>;
using vb    = vector<bool> ;
using vc    = vector<char>;
using vvi   = vector<vi>;
using vll   = vector<vl>;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;
int n,m;
char arr[1010][1010];
bool vis[1010][1010];
vector<vector<pair<pii, char>>> p;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    cin >> n >> m;
    p.resize(n);
    RP(i,0,n) p[i].resize(m);
    memset(vis, 0, sizeof(vis));
    pii pA, pB;
    RP(i,0,n)
        RP(j,0,m) {
            cin >> arr[i][j];
            if (arr[i][j] == 'A') pA = {i,j};
            else if (arr[i][j] == 'B') pB = {i,j};
        }
    p[pA.F][pA.S] = {{-1,-1},'\0'};
    queue<pii> q;
    q.push(pA);
    vis[pA.F][pA.S] = 1;
    while (!q.empty()) {
        int i = q.front().F, j = q.front().S;
        q.pop();
        if (i - 1 >= 0 && !vis[i - 1][j] && arr[i - 1][j] != '#') {vis[i-1][j] = 1;p[i-1][j] = {{i,j}, 'U'};q.push({i-1,j});}
        if (j - 1 >= 0 && !vis[i][j - 1] && arr[i][j - 1] != '#') {vis[i][j-1] = 1;p[i][j-1] = {{i,j}, 'L'};q.push({i,j-1});}
        if (i + 1 < n && !vis[i + 1][j] && arr[i + 1][j] != '#') {vis[i + 1][j] = 1;p[i+1][j] = {{i,j}, 'D'};q.push({i+1,j});}
        if (j + 1 < m && !vis[i][j + 1] && arr[i][j + 1] != '#') {vis[i][j + 1] = 1;p[i][j+1] = {{i,j}, 'R'};q.push({i,j+1});}
    }
    if (!vis[pB.F][pB.S]) cout << "NO\n";
    else {
        vector<char> path;
        pair<pii,char> d = p[pB.F][pB.S];
        while (d.S){
            path.PB(d.S);
            d = p[d.F.F][d.F.S];
        }
        cout << "YES\n";
        cout << path.size() << endl;
        reverse(ALL(path));
        for (char c: path) cout << c;
        cout << endl;
    }
    return 0;
}