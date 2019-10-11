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

vector<int>    KMP(string &s, int mx){
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++){
        int j = pi[i - 1];
        while (j && s[i] != s[j] && !(s[i] == '?' && j < mx))
            j = pi[j - 1];
        if (s[i] == s[j] || s[i] == '?') j++;
        pi[i] = j;
    }
    return pi;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    string txt, pat;
    cin >> txt >> pat;
    string gen = pat + "#" + txt;
    vi pi = KMP(gen, pat.size()),zi = z_function(gen, pat.size());
    int c = 0;
    SHOW(gen, ' ');
    SHOW(pi, ' ');
    SHOW(zi, ' ');
    for (int i = pat.size() + 1; i < pi.size(); i++) if (pi[i] == pat.size() || zi[i] == pat.size()) c++;
    cout << c << endl;
    return 0;
}