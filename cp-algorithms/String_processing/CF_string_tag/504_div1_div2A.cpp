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
    int n,m;
    cin >> n >> m;
    char s[n + 1], t[m + 1];
    cin >> s >> t;
    if (m < n - 1) cout << "NO\n";
    else {
        int i = 0, j = m - 1, k = n - 1;
        while (i < n && s[i] == t[i]) i++;
        if (i == n && i == m) cout << "YES\n";
        else if (s[i] != '*') cout << "NO\n";
        else{
            while (j >= 0 && k >= 0 && s[k] == t[j]) j--,k--;
            if (s[k] != '*') cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}