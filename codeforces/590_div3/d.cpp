#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {for (auto s : v) cout << s << d;}
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
    string s;
    cin >> s;
    set<int> als[26];
    RP(i,0,s.size()) als[s[i] - 'a'].insert(i);
    int q;
    cin >> q;
    while (q--){
        int t;
        cin >> t;
        if (t == 1){
            int p;
            char c;
            cin >> p >> c;p--;
            als[s[p]-'a'].erase(p);
            s[p] = c;
            als[c - 'a'].insert(p);
        }else{
            int l,r;
            cin >> l >> r;l--;r--;
            int res = 0;
            RP(i,0,26){
                auto it = als[i].lower_bound(l);
                if (it != als[i].end() && *it <= r) res++;
            }
            cout << res << endl;
        }
    }
    return 0;
}