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

int binpow(int n, int p, int m){
    int res = 1;
    n %= m;
    while (p){
        if (p & 1) res = res * n % m;
        n = n * n % m;
        p >>= 1;
    }
    return res;
}

int     leading_digit(int n, int k){
    double r = k * log10(n);
    double t;
    double res = pow(10, modf(r, &t));
    return (int)(res * 100);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        string leading = to_string(leading_digit(n,k));
        string trainling = to_string(binpow(n,k,1000));
        cout << string('0', 3 - leading.size()) << leading << "..." << string('0', 3 - trainling.size()) << trainling << endl;
    }
    return 0;
}