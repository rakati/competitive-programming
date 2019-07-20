#include <vector>
#include <iostream>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define RE(i,a,b) for(int i = a; i < b; i++)
#define RR(i,a,b) for(int i = a; i >= b; i--)

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    RE(b, 0, (1<<n)){
        RE(i, 0, n){
            if (b & (1 << i)) cout << i << ' ';
        }
    }
    return 0;
}