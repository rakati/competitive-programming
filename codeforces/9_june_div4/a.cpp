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
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        ll n;
        int c = 0;
        cin >> n;
        while (n > 1){
            if (n % 2 == 0){
                n /= 2;
                c++;
            }
            else if (n % 3 == 0){
                n = (n * 2) / 3;
                c++;
            }
            else if (n % 5 == 0){
                n = (n * 4) / 5;
                c++;
            }else{
                cout << -1 << '\n';
                break;
            }
        }
        if (n == 1) cout << c << '\n';
    }
    return 0;
}