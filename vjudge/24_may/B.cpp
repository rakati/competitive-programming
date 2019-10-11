#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int> > snack(n);
    int j = 0;
    for(int i = 0; i < n; i++){
        int d;
        cin >> d;
        if (d < n - i){
            j = n - d;
            snack[j].push_back(d);
        }else{
            snack[j].push_back(d);
            if (j <= n - i) j++;
        }
    }
    for (int i = 0; i < n; i++){
        int s = snack[i].size();
        if (s == 0) cout << '\n';
        else{
            s--;
            cout << snack[i][s--];
            for(int j = s; j >= 0; j--) 
                cout << ' ' << snack[i][j];
            cout << '\n';
        }
    }
    return 0;
}