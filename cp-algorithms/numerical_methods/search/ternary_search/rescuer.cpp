/* **************************************************** */
/*                      By : rakati                     */
/* **************************************************** */

#include <bits/stdc++.h>

using namespace std;

#define RP(i,a,b) for(int i = a; i < b; i++)
#define RV(i,a,b) for(int i = a; i > b; i--)
#define PI 3.14159265359
#define MOD 1000000007
#define PB push_back
#define MP make_pair

const double eps = 1e-9;
const int INF = 1e9;
double x[2],y[2],v[2];

double travel_time(double p){
    double dx1 = p - x[0];
    double dx2 = x[1] - p;
    return sqrtl(dx1 * dx1 + y[0] * y[0]) / v[0] + sqrtl(dx2 * dx2 + y[1] * y[1]) / v[1];
}

double ternary_search(double l, double r){
    double res = INF;
    while (l <= r){
        if (l == r){
            res = min(travel_time(l),res);
            break;
        }
        double m1 = l + (r - l) / 3.0;
        double m2 = r - (r - l) / 3.0;
        double f1 = travel_time(m1);
        double f2 = travel_time(m2);
        if(f1 > f2) {
            res = min(res, f2);
            l = m1 + 1;
        }
        else if(f1 < f2){
            res = min(res, f1);
            r = m2 - 1;
        }else{
            res = min(res, f1);
            l = m1 + 1;
            r = m2 - 1;
        }
    }
    return (res);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> x[0] >> y[0] >> x[1] >> y[1] >> v[0] >> v[1];
        if (x[0] > x[1]) swap(x[0],x[1]);
        cout << fixed << setprecision(5) << ternary_search(x[0], x[1]) << endl;
    }
    return 0;
}