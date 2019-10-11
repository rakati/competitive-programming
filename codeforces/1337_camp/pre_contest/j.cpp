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
    while (t--){
        int n, k;
        cin >> n >> k;
        vi ch(n);
        RP(i,0,n) cin >> ch[i];
        vl left,right;
        int d = n / 2;
        RP(b,0,(b<<d)){
            ll sum = 0;
            RP(i,0,d)
                if (b & (1<<i)) sum += ch[i];
            left.PB(sum);
        }
        d = n - (n/2);
        RP(b,0,(b<<d)){
            ll sum = 0;
            RP(i,0,d)
                if (b & (1<<i)) sum += ch[d + i];
            right.PB(sum);
        }
        RP(i,0,right.size()) if (right[i] * 2 == k) {cout << "yes\n"; return 0;}
        RP(i,0,left.size()) if (left[i] * 2 == k) {cout << "yes\n"; return 0;}
        left.insert(left.begin(),right.begin()), right.end();

    }
    return 0;
}