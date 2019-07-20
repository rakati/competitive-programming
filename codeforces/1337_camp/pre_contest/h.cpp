//test
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<int, int> vii;
typedef vector<ll> vl;
typedef vector<ll, ll> vll;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector< vi > vvi;
typedef vector< vl > vvl;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define RP(i,a,n) for(int i = a; i < n; i++)
#define MOD 10000000007

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n,c,k;
        cin >> n >> c >> k;
        vl p(n);
        RP(i,0,n) cin >> p[i];
        sort(p.begin(), p.end());
        int g = 1;
        int gs = 1;
        int f = 0;
        RP(i,1,n){
            gs++;
            if (p[i] - p[f] > k || gs > c){
                g++;
                f = i;
                gs = 1;
            }
        }
        cout << g << '\n';
    }
    return 0;
}