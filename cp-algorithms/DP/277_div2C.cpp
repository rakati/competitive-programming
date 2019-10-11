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
    int n, s;
    cin >> n >> s;
    string res1, res2;
    res1.append(n, '0');
    res2.append(n, '0');
    if (s > 0){res1[0] = res2[0] = '1';s--;}
    int c = 0;
    RV(i,n-1,-1){
        if (c < s) {
            if (res1[i]+s - c <= '9') {res1[i] += s - c;c = s;}
            else {c += '9' - res1[i]; res1[i] = '9';}
        }
        else break; 
    }
    cout << ((c != s || (res1[0] == '0' && n > 1)) ? "-1" : res1) << ' ';
    c = 0;
    RP(i,0,n){
        if (c < s) {
            if (res2[i]+s - c <= '9') {res2[i] += s - c;c = s;}
            else {c += '9' - res2[i]; res2[i] = '9';}
        }
        else break; 
    }
    cout << ((c != s || (res2[0] == '0' && n > 1)) ? "-1" : res2) << endl;
    return 0;
}