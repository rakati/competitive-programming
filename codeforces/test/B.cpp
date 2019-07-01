#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n,h,h1,c,t;
    
    cin >> n >> h;
    // etage hight , space
    vector <pair<int,int> > etages;
    c = 0;
    t = 0;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        // add new tage
        if(h - a >= 0)
        {   
            h -= a;
            etages.push_back(make_pair(a, 1));
            t++;
            c++;
        }
        else
        {
            int j;
            // search for sapce in etage
            for(j = 0; j < t; j++){
                if (etages[j].first >= a && etages[j].second < 2){
                    etages[j].second++;
                    c++;
                    break;
                }
            }
            // no free etage
            if (j >= t){
                // arrange space
                if (h > 0)
                    for(j = 0; j < t; j++){
                        if ((etages[j].first + h) >= a && etages[j].second < 2){
                            etages[j].second++;
                            etages[j].first += a;
                            h -= a;
                            c++;
                            break;
                        }
                    }
                else
                    break;
                if (j >= t)
                    break;
            }
        }
    }
    cout << c << endl;
    return 0;
}