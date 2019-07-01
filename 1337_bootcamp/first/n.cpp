#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

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

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vvi p(6);
    for (int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        p[x].PB(y);
        p[y].PB(x);
    }
    int uq = 0;
    for (size_t i = 1; i < 6; i++){
        if (p[i].size() < 3){
            bitset<6> b;
            b[i] = 1;
            for(size_t j = 0; j < p[i].size() ; j++) b[p[i][j]] = 1;
            for (size_t j = 1; j < 6; j++)
                if (!b[j]){
                    for (size_t k = j + 1; k < 6; k++)
                        if (!b[k]){
                            if (find(p[j].begin(), p[j].end(),k) == p[j].end()){
                                cout << "WIN\n";
                                return 0;
                            }
                        }
                }
        }
        else if (p[i].size() >= 2){
            for(size_t j = 0; j < p[i].size() - 1; j++)
                for (size_t k = j + 1; k < p[i].size(); k++){
                    if (find(p[p[i][j]].begin(), p[p[i][j]].end(), p[i][k]) != p[p[i][j]].end()){
                        cout << "WIN\n";
                        return 0;
                    }
                }
        }
    }
    if (uq >= 3){
        cout << "WIN\n";
        return 0;
    }
    cout << "FAIL\n";
    
    return 0;
}