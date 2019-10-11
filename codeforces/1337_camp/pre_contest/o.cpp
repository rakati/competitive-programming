#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<int, int> vii;
typedef vector<ll> vl;
typedef vector<ll, ll> vll;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector< vi > vvi;
typedef vector< vl > vvl;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define RP(i,a,n) for(size_t i = a; i < n; i++)
#define MOD 1000000007

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int c[26];
        RP(i,0,26) cin >> c[i];
        int len = s.size();
        RP(i,0,len){
            if (s[i] == '?'){
                int t = i + 1;
                char p;
                while (s[t] == '?') t++;
                if (i == 0){
                    if (t == len) while (i < t) s[i++] = 'a';
                    else{
                        RP(j,0,26) if (c[j] == c[s[t] - 'a']) {p = j + 'a';break;}
                        while (i < t) s[i++] = p;
                        i--;
                    }
                }else{
                    if (t == len){
                        RP(j,0,26) if (c[j] == c[s[i - 1] - 'a']) {p = j + 'a';break;}
                        while (i < t) s[i++] = p;
                        i--;
                    } else {
                        int max = 2147483647;
                        int cost;
                        RP(j,0,26){
                            cost = abs(c[s[i - 1] - 'a'] - c[j]) + abs(c[j] - c[s[t] - 'a']);
                            if (max > cost) max = cost, p = j + 'a';
                        }
                        while (i < t) s[i++] = p;
                        i--;
                    }
                }
            }
        }
        long long  res = 0;
        RP(i,0,len-1) res += abs(c[s[i] - 'a'] - c[s[i + 1] - 'a']);
        cout << res << '\n';
        cout << s << '\n'; 
    }
    return 0;
}