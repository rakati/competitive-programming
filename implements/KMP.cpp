#include <bits/stdc++.h>

using namespace std;

vector<int>    KMP(string &s){
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++){
        int j = pi[i - 1];
        while (j > 0 && s[i] != s[j])
            j = pi[j - 1];
        if (s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}

int main(){
    string txt, pat;
    cin >> txt >> pat;
    string gen = txt + "#" + pat;
    vector<int> pi = KMP(gen);
    int c = 0;
    for (int i = pat.size() + 1; i < pi.size(); i++) if (pi[i] == pat.size()) cout << txt[i - (2 * pat.size())] << ' ';
    cout << c << endl;
    return 0;
}