#include <bits/stdc++.h>

using namespace std;
/*
    a . x + b y = g
    => a . x (c / g) + b . y (c / g) = c
    x0 = x . (c / g)
    y0 = y . (c / g)
*/
int my_gcd(int a, int b, int &x, int &y){
    if (a == 0){
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int d = my_gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

bool    find_any_solution(int a, int b, int c, int &x0, int &y0, int &g){
    g = my_gcd(abs(a), abs(b), x0, y0);
    if (c % g) return false;

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 *= -1;
    if (y < 0) y0 *= -1;
    return true;
}

int main(){

    return 0;
}