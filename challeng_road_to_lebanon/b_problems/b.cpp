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
    vi v(n);
    RP(i,0,n) cin >> v[i];
    int max = 1;
    RP(i,0,n){
        int score = 1;
        int f = i + 1;
        int b = i - 1;
        while (f < n && v[f-1] >= v[f]) score++,f++;
        while (b >= 0 && v[b + 1] >= v[b]) score++,b--;
        if (score > max) max = score;
    }
    cout << max << '\n';
    return 0;
}