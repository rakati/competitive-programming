#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
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
#define MOD 1000000007

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    string s; cin >> s;
    map<char,int> m;
    set<char> origin;
    RP(i,0,n) origin.insert(s[i]);
    int l = 0, r = 0;
    set<char> temp;
    int res = n;
    while (r < n){
        m[s[r]]++;
        temp.insert(s[r]);
        if (temp == origin){
            while (m[s[l]] > 1) {m[s[l]]--;l++;}
            res = min(res,r - l + 1);
            temp.erase(s[l]);
            m[s[l]]--;
            l++;
        }
        r++;
    }
    cout << res << '\n';
    return 0;
}