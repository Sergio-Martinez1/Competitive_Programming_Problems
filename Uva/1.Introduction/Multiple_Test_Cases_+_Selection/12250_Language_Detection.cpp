#include <iostream>
using namespace std;

int main () {
	string w;
	int i = 1;
	cin>>w;
	while (w != "#"){
		if(w == "HELLO") cout<<"Case "<<i<<": ENGLISH\n";
		else if(w == "HOLA")cout<< "Case "<<i<<": SPANISH\n";
		else if(w == "HALLO")cout<< "Case "<<i<<": GERMAN\n";
		else if(w == "BONJOUR")cout<< "Case "<<i<<": FRENCH\n";
		else if(w == "CIAO")cout<< "Case "<<i<<": ITALIAN\n";
		else if(w == "ZDRAVSTVUJTE")cout<< "Case "<<i<<": RUSSIAN\n";
		else cout<< "Case "<<i<<": UNKNOWN\n";
		cin>>w;
		i++;
	}
	return 0;
}
