#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

bool mysort(const pair<int, int> &a, const pair<int, int> &b){
    if (a.S > b.S) return 1;
    else if (a.S < b.S) return 0;
    return (a.F < b.F);
}

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector< pair <int, int> > v;
    for(int i = 0; i < n; i++){
        pair<int,int> p(i + 1, 0);
        int s = 0;
        cin >> s;
        p.second += s;
        cin >> s;
        p.second += s;
        cin >> s;
        p.second += s;
        cin >> s;
        p.second += s;
        v.PB(p);
    }
    sort(v.begin(), v.end(), mysort);
    for(int i = 0; i < n; i++){
        if (v[i].F == 1){
            cout << i + 1 << '\n';
            return 0;
        }
    }
    return 0;
}