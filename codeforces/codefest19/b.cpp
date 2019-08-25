#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
int n;
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    set<int> pre;
    int i = 0;
    int ans = n - 1;
    while(i < n){
        set<int> suf;
        int j = n - 1;
        while (suf.find(v[j]) == suf.end() && pre.find(v[j]) == pre.end()){suf.insert(v[j]);j--;}
        ans = min(ans, j - i + 1);
        if (pre.find(v[i]) != pre.end()) break;
        pre.insert(v[i]);
        i++;
    }
    cout << (ans < 0 ? 0 : ans) << '\n';
    return 0;
}