#include<iostream>
#include<math.h>
using namespace std;

int main () {
	float a, b;
	cin>>a;
	for(int i=1; i<=a; i++){
		cin>>b;
		b=(((((b*567)/9)+7492)*235)/47)-498;
		int c = (int)b;
		if(c<0) c=c*(-1);
		if(c<10) cout<<0<<"\n";
		else{
			int d = c%10;
			c = (c - d)/10;
			c = c%10;
			cout<<c<<"\n";
		}
	}
	return 0;
}
