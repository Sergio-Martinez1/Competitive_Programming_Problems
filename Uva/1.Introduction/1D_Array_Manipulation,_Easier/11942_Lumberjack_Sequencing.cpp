#include <bits/stdc++.h>
using namespace std;

int main () {
	int N;
	cin >> N;
	cout << "Lumberjacks:\n";

	while (N--) {

		vector<int> beardLength;
		int a = 0, beard;
		bool ascendent = false, descendent = false;

		while (cin >> beard) {

			beardLength.push_back(beard);
			//cout << beardLength[a] << " : ";

			if (a > 0) {

				if (beardLength[a-1] > beardLength[a]) {

					descendent = true;

				}else if (beardLength[a-1] < beardLength[a]){

					ascendent = true;

				}
			}
			a++;
			if (cin.peek() == '\n') break;
		}
		if (ascendent == descendent) cout << "Unordered\n";
		else cout << "Ordered\n";
	}
	return 0;
}
