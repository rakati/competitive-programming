#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

int n = 5;
vi p;
vector<bool> choosen(n);
 
void search(){
    if (p.size() == n){
        cout << "{ ";
        for (vi::iterator it = p.begin(); it != p.end(); it++){
            cout << *it << ' '; 
        }
        cout << "}\n";
    }else {
        for (int i = 0; i < n; i++){
            if (choosen[i]) continue;
            choosen[i] = true;
            p.PB(i);
            search();
            choosen[i] = false;
            p.pop_back();
        }
    }
}

int main(){

    search();
    return 0;
}