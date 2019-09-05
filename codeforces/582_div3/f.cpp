/* **************************************************** */
/*                      Athor : rakati                  */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (b); i++)
#define RV(i,a,b) for(int i = (a); i > (b); i--)
#define SHOW(v) {for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';cout << '\n';}
#define ALL(x) x.begin(),x.end()
#define PI 3.14159265359
#define MOD 1000000007
#define PB push_back
#define MP make_pair
#define F first
#define S second

const double eps = 1e-9;
const int INF = 1e9;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<vi> vii;
typedef vector<vl> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;

    vi p(n), q(n);
    RP(i,0,n) {cin >> p[i];p[i]--;}
    RP(i,0,n) {cin >> q[i];q[i]--;}

    set<int> v1,v2;
    vi rb;
    RP(i,0,n){
        if(v2.count(p[i])) v2.erase(p[i]);
        else v1.insert(p[i]);
        if (v1.count(q[i])) v1.erase(q[i]);
        else v2.insert(q[i]);
        if (v1.empty() && v2.empty()) rb.PB(i);
    }
    SHOW(rb);
    if (rb.size() < k) cout << "NO\n";
    else{
        string s(n, ' ');
        int l = 0;
        RP(i,0,rb.size()){
            int r = rb[i];
            char c = 'a' + min(i,25);
            RP(i,l,r + 1) s[p[i]] = c;
            l = r + 1;
        }
        cout << "YES\n" << s << '\n';
    }
    return 0;
}