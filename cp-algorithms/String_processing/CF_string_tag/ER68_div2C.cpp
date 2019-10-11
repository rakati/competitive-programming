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
    int q;
    cin >> q;
    while (q--){
        char s[101],t[101],p[101];
        cin >> s >> t >> p;
        int pt = 0;
        bool pos = true;
        for (int i = 0; s[i]; i++){
            while (t[pt] && t[pt] != s[i]) pt++;
            if (t[pt] != s[i]) {pos = false;break;}
            pt++;
        }
        if (!pos) cout << "NO\n";
        else{
            pos = true;
            unordered_map<char, int> mt;
            for (int i = 0; t[i]; i++) mt[t[i]]++;
            for (int i = 0; s[i]; i++) mt[s[i]]--;
            for (int i = 0; p[i]; i++) mt[p[i]]--;
            for (auto it : mt) if (it.S > 0) {pos = false;break;}
            cout << (pos ? "YES\n" : "NO\n");
        }
    }
    return 0;
}