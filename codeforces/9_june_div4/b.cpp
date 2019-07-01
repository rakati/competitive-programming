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
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        int o = 0, t = 0, sum = 0;
        for(int j = 0; j < n; j++) {
            int k;
            cin >> k;
            if (k % 3 == 0) sum++;
            else if (k % 3 == 1) o++;
            else t++;
        }
        if (t >= o){
            sum += o;
            t -= o;
            sum += t / 3;
        }else sum += t + ((o - t) / 3);
        cout << sum << '\n';
    }
    return 0;
}