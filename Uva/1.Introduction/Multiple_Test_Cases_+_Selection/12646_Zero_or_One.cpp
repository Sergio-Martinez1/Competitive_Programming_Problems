#include <iostream>
using namespace std;

int main() {

	int x, y, z;
	while(cin >> x >> y >> z) {
		if (x == y) {
			if (x == z) cout << "*\n";
			else cout << "C\n";
		}else if (x == z) cout << "B\n";
		else cout << "A\n";
	}
	return 0;
}
