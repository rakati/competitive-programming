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
    cin >> s;
    size_t p = s.find('.');
    p = (p == string::npos ? s.size() : p);
    int c = (p - (s[0] == '-')) % 3;
    c = (c == 0 ? 3 : c);
    if (s[0] == '-') cout << '(';
    cout << '$';
    RP(i,0,c) cout << s[i + (s[0] == '-')];
    RP(i,c,p - (s[0] == '-')) {cout << ',' << s[i + (s[0] == '-')] << s[i + (s[0] == '-') + 1] << s[i + (s[0] == '-') + 2]; i += 2;}
    cout << '.';
    RP(i,1,3) cout << (i + p < s.size() ? s[i + p] : '0');
    if (s[0] == '-') cout << ')';
    cout << endl;
    return 0;
}