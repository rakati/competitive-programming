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
    int v[n][2];
    for (int i=0; i < n; i++) cin >> v[i][0] >> v[i][1];
    int k;
    cin >> k;
    for (int i=0; i < n; i++)
        if (k >= v[i][0] && k <= v[i][1]){
            cout << n - i << '\n';
            return 0;
        }
    return 0;
}