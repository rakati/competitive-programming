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
    int a,b;
    int c = 0;
    cin >> a >> b;
    while (1){
        if (a > b) break;
        a *= 3;
        b *= 2;
        c++;
    }
    cout << c << '\n';
    return 0;
}