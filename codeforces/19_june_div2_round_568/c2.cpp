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
    vi r(101);
    for(int i = 0; i < n; i++) cin >> s[i];
    cout << "0 ";
    int sum = s[0];
    for(int i = 1; i < n; i++){
        sum += s[i];
        r[s[i - 1]]++;
        if (sum <= M) cout << "0 ";
        else{
            int c = 0,tot = sum, p = 101;
            while (p-- > 0 && tot > M){
                if (r[p] == 0) continue;
                if (r[p] * p <= tot - M) tot -= r[p] * p, c += r[p];
                else{
                    int diff = tot - M;
                    c += diff / p;
                    tot -= (diff / p) * p;
                    if (tot > M) c++;
                    break;
                }
            }
            cout << c << ' ';
        }
    }
    cout << '\n';
    return 0;
}