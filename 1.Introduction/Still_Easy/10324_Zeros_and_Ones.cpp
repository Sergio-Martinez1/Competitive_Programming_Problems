#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main () {

	string numbers;
	int times = 1;

	while (cin >> numbers) {

		int queries;
		cin >> queries;
		int i, j;
		cout << "Case " << times << ":\n";

		for (int x = 1; x <= queries; x++) {
			
			cin >> i >> j;
			int result = 0, a = i;
			if (i > j) {
				a = j;
				j = i;
			}

			for (int y = a; y < j; y++) {
				if (numbers[a] != numbers [y+1]) {
					result = -1;
					break;
				}
			}

			if (result == -1) cout << "No\n";
			else cout << "Yes\n";

		}
		times++;
	}

	return 0;
}
