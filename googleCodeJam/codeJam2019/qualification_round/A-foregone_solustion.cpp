#include <iostream>
#include <string>

using namespace std;

int main()
{
        int t;

        cin >> t;
        for (int i = 1; i <= t; i++)
        {
                string a;
                string b;
                cin >> a;
                string::iterator itr;
                for (itr = a.begin(); itr != a.end(); itr++)
                {
                        if (*itr == '4')
                        {
                                *itr = '2';
                                b += '2';
                        }else
                                b += '0';
                }
                cout << "Case #" << i << ": " << a << " ";
                for (itr = b.begin(); itr != b.end(); itr++)
                        if (*itr != '0')
                                break;
                if (itr == b.end())
                        cout << "0";
                else
                        while(itr != b.end()){
                                cout << *itr;
                                itr++;
                        }
                cout << endl;
        }
        return 0;
}