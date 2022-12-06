#include <iostream>
using namespace std;

int main() {
	int T, a, b, c;
	cin>>T;
	for(int i = 1; i <= T; i++){
		cin>>a>>b>>c;
		if(a > b && a < c) cout<<"Case "<<i<<": "<<a<<"\n";
		else if(a < b && a > c) cout<<"Case "<<i<<": "<<a<<"\n";
		else if(b > a && b < c) cout<<"Case "<<i<<": "<<b<<"\n";
		else if(b < a && b > c) cout<<"Case "<<i<<": "<<b<<"\n";
		else cout<<"Case "<<i<<": "<<c<<"\n";
	}
	return 0;
}
