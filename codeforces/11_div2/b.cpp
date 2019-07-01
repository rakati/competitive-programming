#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;


#define F first
#define S second
#define PB push_back
#define MP make_pair

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h, w;
    cin >> h >> w;
    map<int,vector<int> > b;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            char c;
            cin >> c;
            if (c == '*') b[i].PB(j);
        }
    }
    cout << b.size() << " rows ";
    if (b.end()->first - b.begin()->first + 1 != b.size()){
        cout << "NO\n";
        return 0;
    }
    bool l = false;
    for (map<int,vector<int> >::iterator it = b.begin(); it != b.end(); it++){
        if (it->second.size() > 1 && it->first != b.begin()->first && !l){
            l = true;
            if (it->second.size() != it->second.end() - it->second.begin() + 1){
                cout << "NO\n";
                return 0;
            }
        }else{
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}