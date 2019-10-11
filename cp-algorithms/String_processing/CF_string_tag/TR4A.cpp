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
    string s;
    getline(cin, s);
    bool ponc = false;
    RP(i,0,s.size()){
        if ((s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?') && i + 1 < s.size() && s[i + 1] != ' ') cout << s[i] << ' ';
        else if (s[i] != ' ') cout << s[i];
        else {
            while (i < s.size() && s[i] == ' ') i++;
            if (i + 1 < s.size() && (s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?')){
                if (i + 1 < s.size() && s[i + 1] != ' ') cout << s[i] << ' ';
                else cout << s[i];
            }
            else if (i < s.size()) {cout << ' ';i--;}
        }
    }
    cout << endl;
    return 0;
}