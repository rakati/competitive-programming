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

const double eps = 1e-4;
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
const double s = 10000.0;
double d,h,v,e;
double vol(double h){
    return ((d / 2) * (d / 2) * PI * h);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    cin >> d >> h >> v >> e;
    double w = vol(h);
    if (w + vol(e) * s - (v * s) > 0.0) cout << "NO\n";
    else{
        double l = 0, r = s;
        while (r - l >= eps){
            double mid = (r + l) / 2;
            if (w + (vol(e) * mid) - (v * mid) < 0){
                r = mid;
            }else {
                l = mid;
            }
        }
        cout << "YES\n";
        cout << fixed << setprecision(12) << l << endl;
    }
    return 0;
}