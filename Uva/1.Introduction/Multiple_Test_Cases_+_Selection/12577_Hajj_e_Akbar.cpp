#include <iostream>
using namespace std;

int main () {
	string s;
	int casen = 1;
	while (cin >> s) {
		if (s == "*") break;
		if (s[0] == 'H') cout << "Case "  << casen << ": Hajj-e-Akbar\n";
		if (s[0] == 'U') cout << "Case "  << casen << ": Hajj-e-Asghar\n";
		casen ++;
	}
	return 0;
}
