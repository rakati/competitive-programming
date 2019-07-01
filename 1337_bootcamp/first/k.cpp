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
    int n, m, k;
    cin >> n >> m >> k;
    int r, d;
    m *= 2;
    r = k / m + (k % m == 0 ? 0 : 1);
    if (k % m == 0) d = m / 2;
    else d = (k % m) / 2 + (k & 1 ? 1 : 0);
    cout << r << ' ' << d << ' ' << (k & 1 ? 'L' : 'R') << '\n'; 
    return 0;
}