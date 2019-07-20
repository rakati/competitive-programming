#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>

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
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vpii p(n + 1);
    int a = 0,b = 0;
    p[0].F = 0,p[0].S = 0;
    RP(i,1,n + 1){
        if (s[i - 1] == 'a') a++;
        else b++;
        p[i].F = a;
        p[i].S = b;
    }
    int l = k,r = n;
    while (l <= r){
        int mid = (l + r) / 2;
        bool c = false;
        RP(i,0,n - mid + 1)
            if(p[i + mid].F - p[i].F <= k || p[i + mid].S - p[i].S <= k) {c = true;break;}
        if (c) l = mid + 1;
        else r = mid - 1;
    }
    cout << (l + r) /2 << endl;
    return 0;
}