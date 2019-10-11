#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
 
vi kmp(string s) {
    int n = s.size();
    vi pi(n);
    for(int i = 1, j = 0; i < n; i++) {
        while(j && s[j] != s[i]) j = pi[j - 1];
        pi[i] = j += (s[i] == s[j]);
    }
    return pi;
}
 
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    string s;
    cin >> s;
    vi res, pi = kmp(s);
    int x = s.size() - 1;
    while(true) {
        x = pi[x] - 1;
        cout << s.size() - x - 1 << '\n';
        if(x < 0)
            break;
    }
}
