#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

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
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        string s1,s2;
        cin >> s1 >> s2;
        size_t c = 0;
        bool p = 1;
        for(size_t j = 0; j < s1.size(); j++)
        {
            if (c >= s2.size()){
                p = false;
                break;
            }
            if (s2[c] != s1[j]){
                p = false;
                break;
            }
            if (j + 1 < s1.size()){
                if (s1[j+1] != s2[c]){
                    while (s2[c] == s1[j]) c++;
                }else c++;
            }else {
                while (s2[c] == s1[j]) c++;
            }
        }
        if (c < s2.size()) p = false;
        if (p) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}