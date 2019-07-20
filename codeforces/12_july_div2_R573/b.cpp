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
    string a, b, c;
    cin >> a >> b >> c;
    int ke = 2, sh = 2;
    if (a == b && b == c) ke = 0;
    else if (a == b || b == c || a == c) ke = 1;

    if (a[1] == b[1] && b[1] == c[1] && (max(a[0], max(b[0], c[0])) - min(a[0], min(b[0], c[0])) == 2) && (b[0] + a[0] + c[0] - '0') % 3 == 0) sh = 0;
    else if (a[1] == b[1] && (abs(a[0] - b[0]) == 1 || abs(a[0] - b[0]) == 2)) sh = 1;
    else if (b[1] == c[1] && (abs(b[0] - c[0]) == 1 || abs(b[0] - c[0]) == 2)) sh = 1;
    else if (a[1] == c[1] && (abs(a[0] - c[0]) == 1 || abs(a[0] - c[0]) == 2)) sh = 1;
    else sh = 2;
    cout << min(sh,ke) << '\n';
    return 0;
}