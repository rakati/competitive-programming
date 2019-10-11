/* **************************************************** */
/*                      Author : rakati                 */
/* **************************************************** */
 
#include <bits/stdc++.h>
 
using namespace std;

 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    int S = s.size();
    vector<int> d;
    vector<pair<int, int> > sw;
    for (int i = 0; i < S; i++) if (s[i] != t[i]) d.push_back(i);
    int D = d.size();
    if (D % 2 == 0){
        for (int i = 0; i < D; i++){
            if (d[i] == -1) continue;
            for (int j = i + 1; j < d.size(); j++){
                if (d[j] == -1) continue;
                if (s[d[i]] != t[d[j]]) {sw.push_back({d[i], d[j]});d[i] = d[j] = -1;break;}
            }
            if (d[i] != -1){
                for (int j = i + 1; j < D; j++){
                    if (d[j] == -1) continue;
                    else{
                        sw.push_back({d[i], d[i]});
                        sw.push_back({d[i], d[j]});
                        d[i] = d[j] = -1;
                        break;
                    }
                }
            }
        }
        cout << D / 2 << endl;
        for (int i = 0; i < D / 2; i++) cout << sw[i].first + 1<< ' ' << sw[i].second  + 1<< endl;
    }else cout << "-1\n";
    return 0;
}