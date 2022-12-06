#include<iostream>
#include<math.h>
using namespace std;

int main () {
	float a, b, c;
	cin>>a;
	for (int i=1; i<=a; i++){
		cin>>b>>c;
		b=ceil((b-2)/3);
		c=ceil((c-2)/3);
		b=b*c;
		cout<<(int)b<<"\n";
	}
	return 0;
}
