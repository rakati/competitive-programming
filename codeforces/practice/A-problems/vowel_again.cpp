#include<string>
#include<iostream>

using namespace std;

int main()
{
    int l;
    string s;
    cin >> l >> s;
    
    for (int i = 0; i < l; i++)
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
        {
            cout << "Yes" << endl;
            return 0;
        }
    cout << "No" << endl;
    return 0;
}