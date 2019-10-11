#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {for (auto e: v) cout << e << ' ';}
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
    string s,t;
    cin >> s >> t;
    vi al_t(26,0),al_s(26,0);
    int c = 0,temp;
    RP(i,0,s.size()) {
        if(s[i] != '?') al_s[s[i] - 'a']++;
        else c++;
    }
    RP(i,0,t.size()) al_t[t[i] - 'a']++;
    int l = 0, h = (s.size() / t.size()) + 1;
    int best = 0;
    while (l <= h){
        ll mid = (h + l) / 2;
        int pre = 0;
        RP(i,0,26) if (al_t[i]) {
            temp = al_s[i] - (mid * al_t[i]);
            pre += (temp < 0) ? temp * -1: 0;
        }
        if (pre > c) h = mid - 1;
        else {
            best = max((int)mid, best);
            l = mid + 1;
        }
    }
    string ch;
    RP(i,0,26) if (al_t[i] && (temp = al_s[i] - (best * al_t[i])) < 0) ch.append(temp * -1, char(i + 'a'));
    int k = 0;
    ch.PB(t[0]);
    RP(i,0,s.size()){
        cout << (s[i] == '?' ? ch[k++]:s[i]);
        k %= ch.size();
    }
    cout << endl;
    return 0;
}