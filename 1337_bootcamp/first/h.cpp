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
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if (y - x >= 2) c++;
    }
    cout << c << '\n';
    return 0;
}