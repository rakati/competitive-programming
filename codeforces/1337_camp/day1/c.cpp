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
    double mult = 0;
    RP(i,0,n){
        ll y;
        cin >> y;
        mult += log2(y);
    }
    mult /= n;
    ll l = 0, r = 10000000001;
    while (l < r){
        ll mid = (l + r) / 2;
        if (log2(mid) < mult) l = mid + 1;
        else if (log2(mid) > mult) r = mid - 1;
        else break;
    }
    cout <<  ((l + r) / 2) + (log2((l + r) / 2) < mult) << '\n';   
    return 0;
}