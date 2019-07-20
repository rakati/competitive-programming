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

// src : https://codeforces.com/contest/26/problem/A

int main(){ 
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vi v(n + 1, 0);
    v[0] = v[1] = 4;
    int res = 0;
    for(int i = 2;i <= n; i++)
        if (v[i] == 0)
            for(int j = i * 2; j <= n; j += i) v[j]++;
    RP(i,0,n+1) if (v[i] == 2) res++;
    cout << res << '\n';
    return 0;
}