#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <unordered_map>
#include <set>
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
    
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int q;
    cin >> q;
    while (q--){
        int n,c;
        cin >> n;
        unordered_map<int, int> m;
        RP(i,0,n){
            cin >> c;
            m[c]++;
        }
        vi v;
        for (auto x : m) v.PB(x.S);
        sort(v.rbegin(), v.rend());
        int sum = v[0];
        RP(i,1,v.size()){
            if (v[i] < v[i - 1]) sum += v[i];
            else {
                v[i] = v[i - 1] - 1;
                if (v[i] <= 0) break;
                sum += v[i];
            }
        }
        cout << sum << '\n';
    }
    return 0;
}