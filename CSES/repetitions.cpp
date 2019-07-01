#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string s;
    cin >> s;
    int i = 0;
    int max = 0;
    n = s.size();
    while (i < n){
        int c = i;
        while (s[c] == s[i] && i < n){
            i++;
        }
        if (max < i - c) max = i - c;
    }
    cout << max << '\n';
    return 0;
}