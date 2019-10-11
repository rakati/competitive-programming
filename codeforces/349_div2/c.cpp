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

bool    my(string a, string b){
    for (int i = 0; i < a.size() && i < b.size(); i++){
        if (a[i] != b[i]) return a[i] < b[i];
    }
    if (a.size() == b.size()) return 0;
    return a.size() > b.size();
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    set<string, decltype(&my)> t(&my);
    if (s.size() == 5) cout << "0\n";
    else{
        RV(i,s.size() - 2, 4){
            if(((s.size() - i - 3 + 1) % 2) == 0 || (s.size() - i + 1) % 2)t.insert(string(s.begin() + i,s.begin() + i + 2));
            if (i - 1 > 4 || (s.size() - i + 1) % 3 == 0) t.insert(string(s.begin() + i,s.begin() + i + 3));
        }
        cout << t.size() << endl;
        for (string m : t) cout << m << endl;
    }
    return 0;
}