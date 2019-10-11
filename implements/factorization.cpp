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
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    vi res;
    for (int i = 2; i * i <= n; i++){
        while (n % i == 0){
            res.PB(i);
            n /= i;
        }
    }
    if (n != 1) res.PB(n);
    cout << res[0];
    RP(i,1,res.size()) cout << " * " << res[i];
    cout << '\n';
    return 0;
}