#include <iostream>
#include <string>
using namespace std;

int main () {
	string s;
	int contador = 0;
	while (getline(cin, s)) {
		string o;
		for (char c : s) {
			if (c == '"') {
				if(contador < 1) {
					o += '`';
					o += '`'; 
					contador++;
				}else {
					o += '\'';
					o += '\''; 
					contador = 0;
				}
			}else {
				o += c;
			}
		}
		cout << o << "\n";
	}
	return 0;
}
