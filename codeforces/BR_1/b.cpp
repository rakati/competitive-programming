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
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    while (n--){
        string s;
        cin >> s;
        int r = 0,c = 0;
        if (s[0] == 'R' && s[1] <= '9' && s.find('C') != string::npos){
            int j = 0;
            string res;
            for (j = 0; j < s.size() && s[j] != 'C'; j++);
            for (int i = j + 1; i < s.size(); i++) c = (c * 10) + (s[i] - '0');
            int len = 1, p = 26;
            while (c > p){
                c -= p;
                p *= 26;
                len++;
            }
            c--;
            while (len){
                res.PB((c % 26) + 'A');
                c /= 26;
                len--;
            }
            reverse(ALL(res));
            res.append(s.begin() + 1, s.begin() + j);
            cout << res << endl;
        }else {
            int j;
            for (j = 0; j < s.size() && s[j] > '9'; j++);
            ll num = 0;
            ll p = 1;
            for (int i = j - 1; i >= 0; i--){
                num += (s[i] - 'A' + 1) * p;
                p *= 26;
            }
            string res = "R";
            for (int i = j; i < s.size(); i++) res.PB(s[i]);
            res += "C";
            res += to_string(num);
            cout << res << endl;
        }
    }
    return 0;
}