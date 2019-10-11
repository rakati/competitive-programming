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
    vi b(n);
    for(int i = 0; i < n; i++) cin >> b[i];
    vi sub(6);
    for(int i = 0; i < n; i++){
        if (b[i] == 4) sub[0]++;
        else if (b[i] == 8){
            if (sub[1] < sub[0]) sub[1]++;
        }else if (b[i] == 15){
            if (sub[2] < sub[1]) sub[2]++;
        }else if (b[i] == 16){
            if (sub[3] < sub[2]) sub[3]++;
        }else if (b[i] == 23){
            if (sub[4] < sub[3]) sub[4]++;
        }else{
            if (sub[5] < sub[4]) sub[5]++;
        }
    }
    
    cout << n - (sub[5] * 6) << '\n';
    return 0;
}