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
#define F first
#define S second

typedef long long ll;

void    mult(int a[2][2], int b[2][2]){
    int x = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    int y = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    int z = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    int d = a[1][0] * b[0][1] + a[1][1] * b[1][1];
    a[0][0] = x; a[0][1] = y;
    a[1][0] = z; a[1][1] = d;
}

int       matrix_form(int n){
    int res[2][2] = {{1,0}, {0,1}};
    int a[2][2] = {{0,1}, {1,1}};
    while (n){
        if (n & 1) mult(res, a);
        mult(a, a);
        n >>= 1;
    }
    return (res[1][0]);
}

pair<int,int>  closest_fibo(int n, int low, int high){
    pair<int, int>  p;
    p.S = 0;
    int res;
    while (low <= high){
        int mid = (low + high) >> 1;
        res = matrix_form(mid);
        if (res <= n && p.S < mid){ p.F = res, p.S = mid;}
        else if (res > n) high = mid - 1;
        else low = mid + 1;
    }
    return p;
}

int    fibonacci_code(int n){
    int l = 1, h = 47;
    pair<int, int>  p;
    int c = 0;
    while (n > 0){
        p = closest_fibo(n, l, h);
        n -= p.F;
        h = p.S - 2;
        c++;
    }
    return c;
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci_code(n) << '\n';
    return 0;
}