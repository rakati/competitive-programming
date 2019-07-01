#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<long long> v(3);
    ll d;
    cin >> v[0] >> v[1] >> v[2] >> d;
    sort(v.begin(),v.end());
    ll res = 0;
    if (v[1] - v[0] < d) res += d - (v[1] - v[0]);
    if (v[2] - v[1] < d) res += d - (v[2] - v[1]);
    cout << res << '\n';
    return 0;
}