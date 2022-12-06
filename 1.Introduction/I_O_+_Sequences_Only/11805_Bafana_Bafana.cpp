#include<iostream>
using namespace std;

int main () {
	float a, P;
	int T, N, K;
	cin>>T;
	for(int i=1; i<=T; i++){
		cin>>N>>K>>P;
			a=P-(N*((int)(P/N)));
			a=a+K;
			if(a>N) a=a-N;
		cout<<"Case "<<i<<": "<<a<<"\n"; 
	}
}
