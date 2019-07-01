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
    vi v(n);
    int max = 0;
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        if (c >= 0) c = -c -1;
        v[i] = c;
        if (v[max] > v[i]) max = i;
    }
    if (n & 1) v[max] = -v[max] -1;
    cout << v[0];
    for (int i = 1; i < n; i++) cout << ' ' << v[i];
    cout << '\n';
    return 0;
}