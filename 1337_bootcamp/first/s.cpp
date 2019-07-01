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

char base[] = "0123456789ABCDEFGHIJKLMNOPKRSTUVWXYZ";

string  to_dec(string s){
    string res;
    
}

string to_base_b(string s){
    string res;

}

string to_roman(string s){
    string res;

}

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    string s;
    cin >> a >> b >> s;
    s = to_dec(s);
    if (b == 'R') to_roman(s);
    else s = to_base_b(s);
    cout << s << '\n';
    return 0;
}