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
#define MOD 1000000007

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    vi v(n);
    RP(i,0,n) cin >> v[i];
    sort(v.begin(), v.end());
    int dup = 0;
    RP(i,1,n) if(v[i] == v[i - 1]) dup++;
    if (n == 1)
        cout << (v[0] == 0 ? "cslnb" : "sjfnb") << '\n';
    else if (dup > 1) cout << "cslnb\n";
    else if (dup == 1){
        RP(i,1,n - 1) 
            if (v[i] == v[i + 1]){
                if (v[i] - 1 == v[i - 1]){cout << "cslnb\n";return 0;}
                v[i] -= 1;
                break;
            }
        ll sum = (ll)((n + 1) * (v[0] + v[n - 1])) / 2;
        sum *= -1;
        RP(i,1,n - 1) sum += v[i];
        if (sum & 1 || sum == 0) cout << "sjfnb\n";
        else cout << "cslnb\n";
    }else {
        ll sum = (ll)((n + 1) * (v[0] + v[n - 1])) / 2;
        sum *= -1;
        RP(i,1,n - 1) sum += v[i];
        if (sum & 1 || sum == 0) cout << "cslnb\n";
        else cout << "sjfnb\n";
    }
    return 0;
}