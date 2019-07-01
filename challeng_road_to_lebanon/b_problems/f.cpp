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
    char c[] = "ROYGRBIV";
    int n;
    cin >> n;
    if (n == 7) cout << "ROYGBIV\n";
    else {
        RP(i,0,n - 1) cout << c[i%8];
        cout << (c[(n - 1) % 8] == 'R' ? c[(n - 6) % 8] : c[(n - 1) % 8]) << '\n';
    }
    return 0;
}