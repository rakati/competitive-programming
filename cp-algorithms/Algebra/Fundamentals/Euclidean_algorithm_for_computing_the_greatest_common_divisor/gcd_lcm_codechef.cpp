#include <bits/stdc++.h>
using namespace std;

// url : https://www.codechef.com/problems/FLOW016

// gcd function
int my_gcd(long long a, long long b){
    return b == 0 ? a : my_gcd(b, a % b);
}

int main(){
        int t;
        cin >> t;
        while (t--){
                long long a,b;
                cin >> a >> b;
                long long g = my_gcd(a, b);
		// lcm = (a * b) / gcd(a, b)
                cout << g << ' ' << (a / g) * b << '\n';
        }
        return 0;
}
