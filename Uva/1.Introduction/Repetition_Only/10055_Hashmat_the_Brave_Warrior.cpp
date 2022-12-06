#include<iostream>
using namespace std;

int main () {
	long a, b;
	while(cin>>a>>b){
		a = a-b;
		if(a<0){
			a = a*(-1);
		}
		cout<<a<<"\n";
	}
	return 0;
}
