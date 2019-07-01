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
    int n,a;
    cin >> n >> a;
    bool b[n + 1];
    RP(i,0,n) cin >> b[i];
    int res = 0;
    a--;
    RP(i,1,n){
        if(a - i >= 0 && a + i < n){
            if (b[a + i] && b[a - i]) res += 2;
        } else if (a + i < n && b[a + i]) res++;
        else if (a - i >= 0 && b[a - i]) res++;
    }
    if (b[a]) res++;
    cout << res << '\n'; 
    return 0;
}