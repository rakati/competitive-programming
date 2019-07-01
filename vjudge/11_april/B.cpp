#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    int f1,f2,f3;

    std::ios::sync_with_stdio(false);
    cin >> n;
    
    cin >> f1;
    for (int i = 0; i < n - 1; i++){
        int val;
        cin >> val;
        f1 ^=  val;
    }
    cin >> f2;
    for (int i = 0; i < n - 2; i++){
        int val;
        cin >> val;
        f2 ^=  val;
    }

    cin >> f3;
    for (int i = 0; i < n - 3; i++){
        int val;
        cin >> val;
        f3 ^=  val;
    }
    cout << (f1 ^ f2) << endl;
    cout << (f2 ^ f3) << endl;
    
    return 0;
}