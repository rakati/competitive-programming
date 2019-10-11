/* **************************************************** */
/*                      By : rakati                     */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = a; i < b; i++)
#define RV(i,a,b) for(int i = a; i > b; i--)
#define PI 3.14159265359
#define PB push_back
#define MP make_pair

typedef long long ll;

int main(){
    int n,k;
    cin >> n >> k;
    int sum = 0;
    int temp;
    RP(i,0,n) {
        cin >> temp;
        sum += temp;
    }
    int c = 0;
    while (1) {
        if ((round((sum * 1.0 / n)) == k)) break;
        sum += k;
        c++;
        n++;
    }
    cout << c << '\n';
    return 0;
}