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
    int n, a,b;
    cin >> n >> a >> b;
    if (a > b){
        int c = 0;
        while (a * c <= n){
            if ((n - (a * c)) % b == 0){
                cout << "YES\n";
                cout << c << ' ' << (n - (a * c)) / b << '\n';
                return 0;
            }
            c++;
        }
        cout << "NO\n";
    }else{
        int c = 0;
        while (b * c <= n){
            if ((n - (b * c)) % a == 0){
                cout << "YES\n";
                cout << (n - (b * c)) / a << ' ' << c << '\n';
                return 0;
            }
            c++;
        }
        cout << "NO\n";
    }
    return 0;
}