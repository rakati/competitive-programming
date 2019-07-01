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
    cout << "I hate";
    for (int i = 2; i <= n; i++){
        cout << " that I " << (i & 1 ? "hate" : "love");
    }
    cout << " it\n";
    return 0;
}