#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;


int main(){
	int t,n,m,l,x,y,cnt=0,gv=0,sum=0,min=INT_MAX,num1,num2,ctr;
	cin>>n;
	m = log10(n) + 1;
	l=n;
	for (int i = 0; i < m; ++i)
	{	
		t = l%10;
		sum+=t;
		l = l/10;
	}
	
	if(sum%4==0) cout<<n<<endl;
	else{
		while(sum%4!=0){
			n++;
			m = log10(n) + 1;
			l=n;
			sum=0;
			for (int i = 0; i < m; ++i)
			{	
				t = l%10;
				sum+=t;
				l = l/10;
			}
		}
		cout<<n<<endl;
	}





	return 0;
}