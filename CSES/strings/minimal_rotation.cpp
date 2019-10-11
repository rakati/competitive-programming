#include <bits/stdc++.h>

using namespace std;

int duval(char *s, int n) {
    int i = 0, ans = 0;
    while (i < n / 2) {
        ans = i;
        int j = i + 1, k = i;
        while (j < n && s[k] <= s[j]) {
            if (s[k] < s[j])
                k = i;
            else
                k++;
            j++;
        }
        while (i <= k) {
            i += j - k;
        }
    }
    return ans;
}

int main(){
    char s[2000010];
    cin >> s;
    int len = strlen(s);
    for (int i = len; i < len * 2; i++) s[i] = s[i - len];
    s[len * 2] = '\0';
    int ans = duval(s,len * 2);
    for (int i = ans; i < len + ans; i++) cout << s[i];
    cout << endl;
    return 0;
}