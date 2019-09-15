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
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    vi diff;
    vpii sw;
    RP(i,0,s.size()) if (s[i] != t[i]) diff.PB(i);
    if (diff.size() & 1) cout << "-1\n";
    else{
        RP(i,0,diff.size() - 1){
            if (diff[i] == -1) continue;
            for (int j = i + 1; j < diff.size(); j++){
                if (diff[j] == -1) continue;
                if (s[diff[i]] != t[diff[j]]) {sw.PB({diff[i], diff[j]});diff[i] = diff[j] = -1;break;}
            }
            if (diff[i] != -1){
                for (int j = i + 1; j < diff.size(); j++){
                    if (diff[j] == -1) continue;
                    else{
                        sw.PB({diff[i], diff[i]});
                        sw.PB({diff[i], diff[j]});
                        diff[i] = diff[j] = -1;
                        break;
                    }
                }
            }
        }
        cout << sw.size() << endl;
        RP(i,0,sw.size()) cout << sw[i].F + 1<< ' ' << sw[i].S  + 1<< endl;
    }
    return 0;
}