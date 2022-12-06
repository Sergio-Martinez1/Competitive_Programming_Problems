#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	while (cin >> n) {
		if (n == 0) break;
		int sumaFinal = 0;
		while (n != 0) {
			sumaFinal = sumaFinal + n % 10;
			n = n / 10;
			if (n == 0 and sumaFinal > 9) {
				n = sumaFinal;
				sumaFinal = 0;
			}
		}
		cout << sumaFinal << "\n";
	}
}
