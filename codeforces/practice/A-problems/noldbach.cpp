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
    ll n, k;
    cin >> n >> k;
    vb isp(n + 1,true);
    vl p;
    isp[0] = isp[1] = false;
    RP(i,2,n+1)
        if (isp[i]){
            p.PB(i);
            for (int j = i * i; j <= n; j += i)
                isp[j] = false;
        }
    int mult = 0;
    RP(i,0,p.size()){
        if (p[i] == n) break;
        else if (sum + p[i] <= n) sum += p[i], mult++;
    }
    if (sum == n) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}