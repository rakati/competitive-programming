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
    string s;
    cin >> s;
    int c = 0;
    for (size_t i = 0; i< s.size(); i++)
        if (s[i] == '4' || s[i] == '7') c++;
    if (c == 7 || c == 4) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}