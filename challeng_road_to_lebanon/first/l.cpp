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
    int n;
    cin >> n;
    vi d(n);
    RP(i,0,n) cin >> d[i];
    int l,r;
    l = 0, r = n - 1;
    int ser,dim;
    ser = dim = 0;
    while (r - l >= 0){
        if (d[r] > d[l]) ser += d[r] , r--;
        else ser += d[l] , l++;
        if (r - l < 0) break;
        if (d[r] > d[l]) dim += d[r] , r--;
        else dim += d[l] , l++;
    }
    cout << ser << ' ' << dim << '\n';
    return 0;
}