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
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int sz = s.size();
        if (sz == 1) {cout << "-1\n";continue;}
        bool pal = true;
        RP(i,0,sz / 2) if (s[i] != s[sz - i - 1]) {pal = false;break;}
        if (pal){
            if ((sz & 1) && s[sz / 2] != s[sz / 2 + 1]) swap(s[sz / 2], s[sz / 2 + 1]);
            else {
                bool imp = true;
                RP(i,1,sz / 2) if (s[i] != s[i - 1]) {swap(s[i], s[i - 1]);imp = false; break;}
                if (imp) {cout << "-1\n";continue;}
            }
        }
        cout << s << endl;
    }
    return 0;
}