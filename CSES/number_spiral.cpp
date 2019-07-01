#include <iostream>
#include <vector>
#include <algorithm>

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
        ll row, col;
        ll res;
        cin >> row >> col;
        if (row > col){
            if (row & 1){
                row--;
                res = (row * row) + col;
            }else res = (row * row) - col + 1;
        } else {
            if (col & 1) res = (col * col) - row + 1;
            else {
                col--;
                res = (col * col) + row;
            }
        }
        cout << res << '\n';
    }
    
    return 0;
}