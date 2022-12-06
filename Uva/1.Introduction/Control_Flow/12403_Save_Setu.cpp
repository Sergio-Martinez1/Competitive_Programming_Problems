#include <bits/stdc++.h>
using namespace std;

int main () {
	int T;
	cin >> T;
	long long total = 0;
	string instruction;
	long long amount;

	while (T--) {

		cin >> instruction;

		if (instruction == "donate") {

			cin >> amount;
			total += amount;

		} else if (instruction == "report") {

			cout << total << "\n";

		}

	}

}
