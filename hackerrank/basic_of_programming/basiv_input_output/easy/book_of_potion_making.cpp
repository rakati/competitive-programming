#include <iostream>
#include <vector>
#include <algorithm>

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

// source : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    char isbn[11];
    cin >> isbn;
    int sum = 0;
    for(int i = 0; i < 10; i++) sum += isbn[i] * (i + 1);
    if (sum % 11 == 0) cout << "Legal ISBN\n";
    else cout << "Illegal ISBN\n";
    
    return 0;
}