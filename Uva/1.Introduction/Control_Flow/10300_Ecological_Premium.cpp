#include <bits/stdc++.h>
using namespace std;
int main () {
	//Number of test cases n
	int n;
	//Number of farmers f
	int f;

	cin >> n;
	for (int i = 0; i < n; i++) {
		//Data of farmers
		vector<long long> data(3);
		//Summed burden
		long long o = 0;

		cin >> f;
		for (int j = 0; j < f; j++) {
			cin >> data[0] >> data[1] >> data[2];
			o += data[0] * data [2];
		}

		cout << o << "\n";
	}
	return 0;
}
