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
    if (n == 1) cout << "1\n";
    else{
        int c = 0;
        int l = 1;
        for(int i = 0; i < n - 1; i++, l += 2) c += l;
        c *= 2;
        c += l;
        cout << c << '\n';
    }
    return 0;
}