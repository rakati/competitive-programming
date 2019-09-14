#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
	int n;
	cin >> n;
	vector<int> v(9);
	int min = 0;
	for (int i = 0; i < 9; i++){
		cin >> v[i];
		if (v[min] >= v[i]) min = i;
	}
	if (n / v[min] == 0){
		cout << "-1\n";
		return 0;
	}
	int r = n % v[min];
	string s = string(n / v[min],'0' + min + 1);
	for (int i = 0; i < s.size() && r > 0; i++){
		int a = min;
		for(int j = 0; j < 9; j++) if (v[min] + r >= v[j] && a < j) a = j;
		r = (r + v[min]) % v[a];
		s[i] = '0' + a + 1;
	}
	cout << s << endl;
	return 0;
}
