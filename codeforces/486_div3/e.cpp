/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (b); i++)
#define RV(i,a,b) for(int i = (a); i > (b); i--)
#define SHOW(v) {RP(i,0,v.size()) cout << v[i] << ' ';cout << '\n';}
#define ALL(x) x.begin(),x.end()
#define PI 3.14159265359
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

const double eps = 1e-9;
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

int cost_swap(string s, char f, char l){
    int c = 0;
    int pf = 0;
    while (pf < s.size() && s[pf] != f) pf++;
    RV(i,pf, 0) swap(s[i], s[i - 1]);
    int pl = 0;
    while (pl < s.size() && s[pl] != l) pl++;
    RV(i,pl, 0) swap(s[i], s[i - 1]);
    if (s[s.size() - 1] == '0')
        for (int i = s.size() - 1; i >= 2 && s[i] == '0'; i--) c++;
    return c;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    int z1 = INF, z2 = INF, f = INF ,t = INF, s7 = INF;
    reverse(ALL(s));
    z1 = s.find('0');z1 = (z1 == string::npos) ? INF : z1;
    s7 = s.find('7');s7= (s7 == string::npos) ? INF : s7;
    f = s.find('5');f = (f == string::npos) ? INF : f;
    t = s.find('2');t = (t == string::npos) ? INF : t;
    z2 = (z1 != INF) ? s.find('0', z1 + 1) : z1;z2 = (z2 == string::npos) ? INF : z2;
    int res = INF;
    if (z1 != INF){
        if (z2 != INF) {int c = cost_swap(s, '0', '0');if (c >= 0) res = min(res, z1 + z2 - 1) + c;}
        if (f != INF) {int c = cost_swap(s, '0','5');if (c >= 0) res = min(res, (z1 > f) ? z1 + f + c : z1 + f - 1 + c);}
    }
    if (f != INF) {
        if (t != INF) {int c = cost_swap(s, '5','2');if (c >= 0) res = min(res, f > t ? f + t + c: f + t - 1 + c);}
        if (s7 != INF) {int c = cost_swap(s, '5', '7');if (c >= 0) res = min(res, f > s7 ? f + s7 + c: f + s7 - 1+ c);}
    }
    cout << ((res > s.size() * 2|| res < 0) ? -1 : res) << endl;
    return 0;
}