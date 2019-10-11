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

const double eps = 1e-9;

typedef long long ll;
double f(double val);
double ternary_search(double l, double r){
    while (r - l > eps){
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        double f1 = f(m1);
        double f2 = f(m2);
        if (f1 < f2) l = m1;
        else r = m2;
    }
    return f(l); //return the maximum of f(x) in [l, r]
}

int main(){
    
    return 0;
}