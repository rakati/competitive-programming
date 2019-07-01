#include <iostream>
#include <string>

using namespace std;

int main()
{
        int t;

        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            int p;
            string s;
            cin >> p;
            cin >> s;
            string::iterator itr;
            for (itr = s.begin(); itr != s.end(); itr++)
            {
                if (*itr == 'S')
                    *itr = 'E';
                else 
                    *itr = 'S';
            }
            cout << "Case #" << i << ": " << s << endl;
        }
        return 0;
}