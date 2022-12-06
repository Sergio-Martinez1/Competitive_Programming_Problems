#include <iostream>
using namespace std;

int main () {
	int a;
	string n;
	cin>>a;
	for(int i = 0; i < a; i++){
		cin>>n;
		int length = n.size();
		//cout<<length<<"\n";
		//cout<<n[0]<<"\n";
		//cout<<n[1]<<"\n";
		if(n == "78"){
			cout<<"+"<<"\n";
		}else if(n =="1" || n=="4"){
			cout<<"+"<<"\n";
		}else if(n[length-2] == '3' && n[length-1] == '5'){
			cout<<"-"<<"\n";
		}else if(n[0] == '9' && n[length-1] == '4'){
			cout<<"*"<<"\n";
		}else if(n[0] == '1' && n[1] == '9' && n[2] == '0'){
			cout<<"?"<<"\n";
		}else cout<<"?"<<"\n";
	}
}
