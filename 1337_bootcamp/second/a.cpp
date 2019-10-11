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
    cin.tie(0);
    int t;
    cin >> t;
    RP(i,1,t+1){
        int n;
        cin >> n;
        vi v1(n),v2(n);
        RP(j,0,n) cin >> v1[j];
        RP(j,0,n) cin >> v2[j];
        sort(v1.begin(), v1.end());
        sort(v2.rbegin(), v2.rend());
        ll sum = 0;
        RP(j,0,n) sum += v2[j] * v1[j];
        cout << "Case #" << i << ": " << sum << '\n';
    }
    return 0;
}