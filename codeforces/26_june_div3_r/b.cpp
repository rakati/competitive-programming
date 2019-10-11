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
    int q;
    cin >> q;
    while (q--){
        int n,k;
        int max ,min;
        cin >> n >> k;
        vi v(n);
        RP(i,0,n) cin >> v[i];
        min = max = v[0];
        RP(i,1,n){
            if (min > v[i]) min = v[i];
            if (max < v[i]) max = v[i];
        }
        if ((max - min) / 2 + (max - min) % 2 > k) cout << "-1\n";
        else cout << min + k << '\n';
    }
    return 0;
}