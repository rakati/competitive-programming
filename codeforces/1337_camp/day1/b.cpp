#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>

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
    vi s(n);
    RP(i,0,n) cin >> s[i];
    int i = 0;
    int best = 1;
    while (i < n){
        int j = i;
        unordered_map<int,bool> u;
        while (j < n && u[s[j]] == false) {
            u[s[j]] = true;
            j++;
        }
        best = max(j - i,best);
        while (s[i] != s[j] && i < n) i++;
        i++;
    }
    cout << best << '\n';
    return 0;
}