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
    int n;
    cin >> n;
    vi c(n);
    for(int i = 0; i < n; i++){
        ll k;
        cin >> k;
        c[i] = __builtin_popcount(k);
    }
    if (n == 1) cout << "0\n";
    else{
        sort(c.begin(), c.end());
        ll same = 1,res = 0;
        for(int i = 1; i < n; i++){
            if (c[i] != c[i - 1]){
                res += (same * (same - 1)) / 2;
                same = 1;
            }else same++;
        }
        res += (same * (same - 1)) / 2;
        cout << res << "\n";
    }
    return 0;
}