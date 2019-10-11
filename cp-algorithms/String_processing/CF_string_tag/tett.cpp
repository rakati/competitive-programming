/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = (a); i < (int)(b); i++)
#define RV(i,a,b) for(int i = (a); i > (int)(b); i--)
#define SHOW(v,d) {for (auto e: v) cout << e << d;cout << '\n';}
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
using vvi   = vector<vi>;
using vll   = vector<vl>;
using pii   = pair<int, int>;
using pll   = pair<ll, ll>;
using vpii  = vector<pii>;
using vpll  = vector<pll>;

int    pref(string &s1, string &s2){
    int n1 = s1.size();
    int n2 = s2.size();
    vector<int> pi(n2);
    for (int i = 1; i < n2; i++){
        int j = pi[i - 1];
        while (j > 0 && j < n1 && s2[i] != s1[n1 - j - 1]){
            j = pi[j - 1];
        }
        if (s2[i] == s1[n1 - j - 1] && j < n1) j++;
        pi[i] = j;
    }
    SHOW(pi,' ');
    SHOW(s2, ' ');
    SHOW(s1, ' ');
    return pi[n2 - 1];
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    int n;
    cin >> n;
    string res;
    cin >> res;
    RP(i,0,n - 1){
        string temp;
        cin >> temp;
        temp = '#' + temp;
        int len = pref(res, temp);
        res += temp.substr(len+1, temp.size() - len);
    }
    cout << res << endl;
    return 0;
}