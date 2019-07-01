#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <deque>

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
    char b[n+1];
    cin >> b;
    deque<char> s;  
    if(n&1) RP(i,0,n) (i & 1) ? s.push_front(b[i]) : s.push_back(b[i]);
    else RP(i,0,n) (i & 1) ? s.push_back(b[i]) : s.push_front(b[i]);    
    RP(i,0,n) cout << s[i];
    cout << '\n';
    return 0;
}