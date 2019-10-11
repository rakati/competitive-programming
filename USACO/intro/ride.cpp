/*
ID: ouhaddo1
LANG: C++
TASK: ride
*/
 
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
const long long INF = 1e11;
 
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

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("ride.in","r",stdin);
	freopen("ride.out","w",stdout);
    string in;
    int d1 = 1, d2 = 1;
    cin >> in;
    RP(i,0,in.size()) d1 = d1 * (in[i] - 'A' + 1) % 47;
    cin >> in;
    RP(i,0,in.size()) d2 = d2 * (in[i] - 'A' + 1) % 47;
    cout << (d1 == d2 ? "GO" : "STAY") << endl;
    return 0;
}