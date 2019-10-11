/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << ' ';cout << d;}
#define ALL(x) x.begin(),x.end()
#define MOD 1000000000
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
using vii   = vector<vi>;
using vll   = vector<vl>;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;

int dpt[1010][1010],dpf[1010][1010], tzero[1010][1010],fzero[1010][1010];

int facto(int n, int t){
    int c = 0;
    if (n == 0) return 1;
    while (n % t == 0 && n) {c++; n /= t;}
    return (c);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n;
    cin >> n;n++;
    memset(dpt, 10, sizeof(dpt));
    memset(dpf, 10, sizeof(dpf));
    memset(tzero, 0, sizeof(tzero));
    memset(fzero, 0, sizeof(fzero));
    int temp;
    int z = 0;
    RP(i,1,n) RP(j,1,n) {
        cin >> temp;
        tzero[i][j] = facto(temp, 2);
        fzero[i][j] = facto(temp, 5);
        if (temp == 0) z = i;
    }
    dpf[0][1] = dpt[0][1] = dpf[1][0] = dpt[1][0] = 0;
    RP(i,1,n) RP(j,1,n) dpt[i][j] = min(dpt[i - 1][j], dpt[i][j - 1]) + tzero[i][j];
    RP(i,1,n) RP(j,1,n) dpf[i][j] = min(dpf[i - 1][j], dpf[i][j - 1]) + fzero[i][j];
    string res;
    int i = n - 1, j = n - 1;
    if (min(dpt[n - 1][n - 1], dpf[n - 1][n - 1]) > 1 && z > 0){
        if (z > 1) res.append(z - 1, 'D');
        res.append(n - 2, 'R');
        if (z < n - 1) res.append(n - z - 1, 'D');
        cout << "1\n";
        cout << res << endl;
        return 0;
    }
    if (dpt[n - 1][n - 1] < dpf[n - 1][n - 1]){
        while (!(i == 1 && j == 1)){
            if (dpt[i - 1][j] < dpt[i][j - 1]) {res.PB('D'); i--;}
            else {res.PB('R'); j--;}
        }
    }else{
        while (!(i == 1 && j == 1)){
            if (dpf[i - 1][j] < dpf[i][j - 1]) {res.PB('D'); i--;}
            else {res.PB('R'); j--;}
        }
    }
    cout << min(dpf[n - 1][n - 1], dpt[n - 1][n - 1]) << endl;
    reverse(ALL(res));
    cout << res << endl;
    return 0;
}