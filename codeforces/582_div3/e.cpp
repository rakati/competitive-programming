/* **************************************************** */
/*                      By : rakati                     */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (b); i++)
#define RV(i,a,b) for(int i = (a); i > (b); i--)
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
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    string patt = "abc";
    do {
        string curr;
        RP(i,0,(n > 1 ? 2 : 1)) curr += patt;
        if (patt.find(s) == string::npos && patt.find(t) == string::npos){
            cout << "YES\n";
            RP(i,0,n) cout << patt;
            cout << '\n';
            return 0;
        }
        patt = string(3,patt[0]) + string(3,patt[1]) + string(3,patt[2]);
        if (patt.find(s) == string::npos && patt.find(t) == string::npos){
            cout << "YES\n";
            RP(i,0,n) cout << patt;
            cout << '\n';
            return 0;
        }
    }while (next_permutation(ALL(patt)));
    cout << "NO\n";
    return 0;
}