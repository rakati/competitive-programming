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
    string s;
    cin >> s;
    int sf = 0, fs = 0;
    for(int i = 1; i < n; i++)
    {
        if (s[i] == 'F' && s[i - 1] == 'S') sf++;
        else if (s[i] == 'S' && s[i - 1] == 'F') fs++;
    }
    if (sf > fs) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}