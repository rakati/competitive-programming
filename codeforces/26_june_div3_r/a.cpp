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
    string n;
    cin >> n;
    int sum = 0;
    RP(i,0,n.size()) sum += n[i] - '0';
    if (sum % 4 == 0) cout << n;
    else {
        reverse(n.begin(), n.end());
        RP(i,0,n.size()){
            if ((n[i] - '0') % 10 - (4 - (sum % 4)) >= 0){
                n[i] += (4 - (sum % 4));
                break;
            }else {
                sum -= (n[i] - '0') % 10 - 1;
                n[i] = '0';
                if (n.size() > i + 1) n[i + 1]++;
                else n.PB('1');
            }
        }
        reverse(n.begin(), n.end());
    }
    cout << n << '\n';
    return 0;
}