#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {
	int a;
	double n; 
	int result;
	cin >> a;

	while (a--) {
		cin >> n;
		n = (-.5) + sqrt((1+8*n)/4);
		result = n;
		cout << result << "\n";
	}

	return 0;
}
