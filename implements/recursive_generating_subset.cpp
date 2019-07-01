#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> vi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

vi subset;
int n = 5;
void    search(int k){
    if (k == n){
        cout << "{ ";
        for (vi::iterator it = subset.begin(); it != subset.end(); it++){
            cout << *it << ' '; 
        }
        cout << "}\n";
    }else {
        search(k + 1);
        subset.PB(k);
        search(k + 1);
        subset.pop_back();
    }
}

int main(){
    search(0);
    return 0;
}