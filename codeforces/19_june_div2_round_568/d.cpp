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
#define MAX 10000000000
int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    if (n == 2){
        cout << "1\n";
    }else {
        ll m1, m2, m3;
        m1 = MAX;
        m2 = MAX;
        m3 = MAX;
        for(int i = 0; i < n; i++){
            if (s[i] < m1){
                m3 = m2;
                m2 = m1;
                m1 = s[i];
            }else if (s[i] < m2){
                m3 = m2;
                m2 = s[i];
            }else if (s[i] < m3) m3 = s[i];
        }
        ll f, fc = 0;
        ll c1 = m3 - m1, c2 = m3 - m2;
        for(int i = 3; i < n && fc < 2; i++){
            if ((s[i] - m1) % () != 0 && (s[i] - m1) % () != 0){
                fc++;
                if (fc == 1) f = i;
            }
        }
        if (fc > 1) cout << "-1\n";
        else if (fc == 1) cout << f + 1 << "\n";
        else cout << "1\n";
    }
    return 0;
}