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
    ll k,n,w;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        n -= k * i;
    cout << ((n < 0) ? -n : 0) << '\n';
    return 0;
}