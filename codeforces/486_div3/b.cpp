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

bool my(const string &a, const string &b){
    int A = a.size();
    int B = b.size();
    if (A != B) return (A < B);
    int c = a.compare(b);
    return (c >= 0) ? 0 : 1;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    vector<string> v(n);
    RP(i,0,n) cin >> v[i];
    sort(ALL(v), my);
    RP(i,1,n){
        if (v[i].find(v[i - 1]) == string::npos) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    RP(i,0,n) cout << v[i] << endl;
    return 0;
}