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

vi mo = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31,
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi m(n);
    for(int i = 0; i < n; i++) cin >> m[i];
    int l = 0;
    int c = 0;
    for(int i = 1; i < n; i++){
        if (m[i] == 28 || m[i] == 29){
            if (l != 0 && l == m[i]){
                cout << "No\n";
                return 0;
            }
            l = m[i];
        }
        else if((m[i - 1] == 29 || m[i - 1] == 28) && m[i] != 31){
            cout << "No\n";
            return 0;
        }else if (m[i] == m[i - 1]){
            if (m[i] == 31){
                c++;
                if (c > 1 && n > 12){
                    if (m[i - 12] != m[i - 13]){
                        cout << "No\n";
                        return 0;
                    }
                }else if (c > 1){
                    cout << "No\n";
                    return 0;
                }
            }
            else {
                cout << "No\n";
                return 0;
            }
        }
    }
    cout << "Yes\n";
    return 0;
}