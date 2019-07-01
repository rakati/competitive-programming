#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
        int t;

        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            int n,b,f;
            vector<int> broken;
            string bits;
            cin >> n >> b >> f;
            fflush(stdout);
            while (1)
            {
                cin >> bits;
                if (bits == "1")
                    break;
                if (bits == "-1")
                    return 0;
                
            }
        }
        return 0;
}