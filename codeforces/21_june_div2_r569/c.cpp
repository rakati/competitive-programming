#include <iostream>
#include <vector>
#include <deque>
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
    int n,q;
    cin >> n >> q;
    deque <ll> v;
    for(int i = 0; i < n; i++){
        ll c = 0;
        cin >> c;
        v.PB(c);
    }
    if (q == 0) {
        return 0;
    }
    vector <ll> qz(q);
    for(int i = 0; i < q; i++) cin >> qz[i];
    int f = 0;
    for(int i = 1; i <= qz.back(); i++){
        
        if (i == qz[f]){
            cout << v.front() << ' ' << v.at(1) << '\n';
            f++;
        }
        if (v.front() > v.at(1)){
            int x, y;
            x = v.front();
            y = v.at(1);
            v.pop_front();
            v.front() = x;
            v.push_back(y);
        }else{
            int x = v.front();
            v.pop_front();
            v.push_back(x);
        }
    }
    return 0;
}