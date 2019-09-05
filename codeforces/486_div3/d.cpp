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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    int z1 = -1, z2 = -1, f = -1,t = -1,s7 = -1;
    reverse(ALL(s));
    RP(i,0,s.size()){
        if (s[i] == '0'){
            if (z1 == -1) z1 = i;
            else if (z2 == -1) z2 = i;
        }else if (s[i] == '5' && f == -1) f = i;
        }else if (s[i] == '2' && t == -1) t = i;
        else if (s[i] == '7' && s7 == -1) s7 = i; 
    }
    if ((z1 == -1 && z2 == -1) || (z1 == -1 && f == -1) || (t == -1 && f == -1) || (f == 0 && s7 == 0)){
        cout << "-1\n";
    }else {
        int res1 = INF,res2 = INF,res3 = INF,res4 = INF;
        if (z1 != -1 && z2 != -1) res1 = z1 + z2 - 1;
        if (z1 != -1 && f != -1){
            res2 = z1 + f1 - (f1 > z1 ? 1 : 0);
            string p = s;
            if (f1 == 0) {
                res = z1;
                RV()
            }else{

            }
        }if (f1 != -1 && t != -1){

        }if (f == 0 && s7 == 0){

        }
        int res2 = (z1 != -1 && f1 != -1) ? (z1 + f1 - (f1 > z1 ? 1 : 0)) : INF;
        int res3 = (f1 != -1 && t != -1) ? (f1 + t - (t > f1 ? 1 : 0)) : INF;
        cout << min(res1, min(res2, res3)) << endl;
    }
    return 0;
}