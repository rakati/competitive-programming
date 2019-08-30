/* **************************************************** */
/*                      By : rakati                     */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265359
#define PB push_back
#define MP make_pair

typedef long long ll;

void    mult(int a[2][2], int b[2][2]){
    int x = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    int y = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    int z = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    int d = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    a[0][0] = x; a[0][1] = y;
    a[1][0] = z; a[1][1] = d;
}


int       matrix_form_fibo(int n){
    int res[2][2] = {{1,0}, {0,1}};
    int a[2][2] = {{0,1}, {1,1}};
    while (n){
        if (n & 1) mult(res, a);
        mult(a, a);
        n >>= 1;
    }
    return (res[1][0]);
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}