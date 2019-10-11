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
    ll n,a,b,c;
    cin >> n >> a >> b >> c;
    ll res = 0;
    if(b - c < a){
        if (n >= b){
            res += (n - b) / (b - c) + 1;
            n = (n - b ) % (b - c) + c;
        }
        res += n / a;
    }else {
        res += n / a;
    }
    cout << res << '\n';
    return 0;
}