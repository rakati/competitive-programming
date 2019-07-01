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
    int p1 = 1, p2 = 2, s = 3;
    for (int i = 0; i < n; i++){
        int k,t;
        cin >> k;
        if (k != p1 && k != p2){
            cout << "NO\n";
            return 0;
        }
        t = s;
        s = (k == p1) ? p2 : p1;
        p1 = k;
        p2 = t;
    }
    cout << "YES\n";
    return 0;
}