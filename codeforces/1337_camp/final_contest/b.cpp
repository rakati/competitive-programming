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

bool b[1010][1010];
bool reach[1010][1010];
int n,m;

void ft_init(){
    RP(j,0,m){
        if (b[n - 1][j] && !reach[n - 1][j]){
            reach[n - 1][j] = true;
            queue< pii > q;
            q.push(MP(n - 1,j));
            while (!q.empty()){
                pii c = q.front();
                q.pop();
                if (c.S - 1 >= 0) if (b[c.F][c.S - 1] && !reach[c.F][c.S - 1]){q.push(MP(c.F, c.S - 1)); reach[c.F][c.S - 1] = true;}
                if(c.S + 1 < m) if (b[c.F][c.S + 1] && !reach[c.F][c.S + 1]){q.push(MP(c.F, c.S + 1)); reach[c.F][c.S + 1] = true;}
                if (c.F - 1 >= 0) if (b[c.F - 1][c.S] && !reach[c.F - 1][c.S]){q.push(MP(c.F - 1, c.S)); reach[c.F - 1][c.S] = true;}
                if (c.F + 1 < n) if (b[c.F + 1][c.S] && !reach[c.F + 1][c.S]){q.push(MP(c.F + 1, c.S)); reach[c.F + 1][c.S] = true;}

                if (c.F - 1 >=0 && c.S - 1 >= 0) if (b[c.F - 1][c.S - 1] && !reach[c.F - 1][c.S - 1]){q.push(MP(c.F - 1, c.S - 1)); reach[c.F - 1][c.S - 1] = true;}
                if(c.F + 1 < n && c.S + 1 < m) if (b[c.F + 1][c.S + 1] && !reach[c.F + 1][c.S + 1]){q.push(MP(c.F + 1, c.S + 1)); reach[c.F + 1][c.S + 1] = true;}
                if (c.F - 1 >= 0 && c.S + 1 < m) if (b[c.F - 1][c.S + 1] && !reach[c.F - 1][c.S + 1]){q.push(MP(c.F - 1, c.S + 1)); reach[c.F - 1][c.S + 1] = true;}
                if (c.F + 1 < n && c.S - 1 >= 0) if (b[c.F + 1][c.S - 1] && !reach[c.F + 1][c.S - 1]){q.push(MP(c.F + 1, c.S - 1)); reach[c.F + 1][c.S - 1] = true;}
            }
        }
    }
}

void        link_it(int x, int y){
    bool r = false;
    if (x + 1 < n) if (reach[x + 1][y]) r = true;
    if (x - 1 >= 0) if (reach[x - 1][y]) r = true;
    if (y + 1 < m) if (reach[x][y + 1]) r = true;
    if (y - 1 >= 0) if (reach[x][y - 1]) r = true;
    if (r){
        queue< pii > q;
        reach[x][y] = true;
        q.push(MP(x,y));
        while (!q.empty()){
            pii c = q.front();
            q.pop();
            if (c.S - 1 >= 0) if (b[c.F][c.S - 1] && !reach[c.F][c.S - 1]){q.push(MP(c.F, c.S - 1)); reach[c.F][c.S - 1] = true;}
            if(c.S + 1 < m) if (b[c.F][c.S + 1] && !reach[c.F][c.S + 1]){q.push(MP(c.F, c.S + 1)); reach[c.F][c.S + 1] = true;}
            if (c.F - 1 >= 0) if (b[c.F - 1][c.S] && !reach[c.F - 1][c.S]){q.push(MP(c.F - 1, c.S)); reach[c.F - 1][c.S] = true;}
            if (c.F + 1 < n) if (b[c.F + 1][c.S] && !reach[c.F + 1][c.S]){q.push(MP(c.F + 1, c.S)); reach[c.F + 1][c.S] = true;}

            if (c.F - 1 >=0 && c.S - 1 >= 0) if (b[c.F - 1][c.S - 1] && !reach[c.F - 1][c.S - 1]){q.push(MP(c.F - 1, c.S - 1)); reach[c.F - 1][c.S - 1] = true;}
            if(c.F + 1 < n && c.S + 1 < m) if (b[c.F + 1][c.S + 1] && !reach[c.F + 1][c.S + 1]){q.push(MP(c.F + 1, c.S + 1)); reach[c.F + 1][c.S + 1] = true;}
            if (c.F - 1 >= 0 && c.S + 1 < m) if (b[c.F - 1][c.S + 1] && !reach[c.F - 1][c.S + 1]){q.push(MP(c.F - 1, c.S + 1)); reach[c.F - 1][c.S + 1] = true;}
            if (c.F + 1 < n && c.S - 1 >= 0) if (b[c.F + 1][c.S - 1] && !reach[c.F + 1][c.S - 1]){q.push(MP(c.F + 1, c.S - 1)); reach[c.F + 1][c.S - 1] = true;}
        }
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    RP(i,0,n) RP(j,0,m) reach[i][j] = false;
    RP(i,0,n){
        string s;
        cin >> s;
        RP(j,0,m) b[i][j] = (s[j] == '0' ? false : true);
    }
    ft_init();
    int q;
    cin >> q;
    bool r = false;
    RP(j,0,m) if (reach[0][j] == true) {r = true;break;}
    while (q--){
        int c;
        cin >> c;
        if (c == 1){
            cout << (r ? "YES\n" : "NO\n");
        }else{
            int x,y;
            cin >> x >> y;
            b[x - 1][y - 1] = true;
            if (!r){
                link_it(x - 1,y - 1);
                RP(j,0,m) if (reach[0][j] == true) {r = true;break;}
            }
        }
    }
    return 0;
}