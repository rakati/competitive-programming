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

int main(){
    int n;
    cin >> n;
    vi p(n);
    for(int i = 0; i < n; i++) p[i] = i;
    do{
        cout << "{ ";
        for(int i = 0; i < n; i++) cout << p[i] << ' ';
        cout << "}\n";
    }while (next_permutation(p.begin(), p.end()));
    return 0;
}