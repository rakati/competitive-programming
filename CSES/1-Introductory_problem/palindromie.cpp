/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {RP(i,0,v.size()) cout << v[i] << ' ';cout << d;}
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
using vii   = vector<vi>;
using vll   = vector<vl>;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    vi v(26, 0);
    string s;
    cin >> s;
    RP(i,0, s.size()) v[s[i] - 'A']++;
    int odd = -1;
    RP(i,0,26) {
        if (v[i] & 1) {
            if (odd == -1) odd = i;
            else {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
    }
    RP(j,0,26){
        if (j == odd) continue;
        RP(i, 0, v[j] / 2) cout << (char)(j + 'A');
    }
    if (odd != -1) RP(i, 0, v[odd]) cout << (char)(odd + 'A');
    RV(j,25,-1){
        if (j == odd) continue;
        RP(i, 0, v[j] / 2) cout << (char)(j + 'A');
    }
    cout << endl;
    return 0;
}