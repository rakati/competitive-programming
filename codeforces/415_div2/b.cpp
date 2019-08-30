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
#define S second
#define F first
typedef long long ll;

int main(){
    int n,f;
    cin >> n >> f;
    vector<pair<ll,ll> > d(n);
    vector<pair<ll, int> > p(n);
    RP(i,0,n) {
        cin >> d[i].F >> d[i].S;
        ll x = (d[i].F * 2) > d[i].S ? d[i].S : d[i].F * 2;
        ll y = (d[i].F) > d[i].S ? d[i].S : d[i].F;
        p[i].F = x - y;p[i].S = i;
    }
    ll sum = 0;
    sort(p.rbegin(), p.rend());
    RP(i,0,f) d[p[i].S].F *= 2;
    RP(i,0,n) sum += (d[i].F) > d[i].S ? d[i].S : d[i].F;
    cout << sum << endl;
    return 0;
}