#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

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
    unsigned long long n, k;
    cin >> n >> k;
    vector<ll> sor, unsor;
    for (ll i = 1; i <= sqrt(n);i++){
        if (n % i == 0) {
            sor.PB(i);
            if (i != sqrt(n)) unsor.PB(n / i);
        }
    }
    if (unsor.size() + sor.size() < k) cout << "-1\n";
    else{
        if (k <= sor.size()) cout << sor[k-1] << '\n';
        else{
            reverse(unsor.begin(), unsor.end());
            cout << unsor[k - sor.size() - 1] << "\n";
        }
    }
    return 0;
}