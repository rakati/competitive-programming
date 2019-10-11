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
    int n, M;
    cin >> n >> M;
    vi s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    cout << "0 ";
    int sum = s[0];
    for(int i = 1; i < n; i++){
        sum += s[i];
        if (sum <= M) cout << "0 ";
        else{
            sort(s.begin(), s.begin() + i);
            int c = 0,p = i - 1,tot = sum;
            while (tot > M){
                c++;
                tot -= s[p--];
            }
            cout << c << ' ';
        }
    }
    cout << '\n';
    return 0;
}