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
    ll n;
    int k;
    cin >> n >> k;
    while (k--){
        if (n % 10 == 0)
            n /= 10;
        else n--;
    }
    cout << n << '\n';
    return 0;
}