#include <bits/stdc++.h>
using namespace std;

int main () {
	float H, U, D, F;
	while (cin >> H >> U >> D >> F) {

		if (H == 0) break;

		float distanceReached = 0, day = 1;
		F = (F/100) * U;

		while (true) {

			distanceReached += U;
			//cout << distanceReached << " : DR : Day " << day << "\n";
			if (distanceReached > H) break;
			distanceReached = (distanceReached - D);
			//cout << distanceReached << " : DR : Night " << day << "\n";
			if (distanceReached < 0) break;
			U -= F;
			if (U < 0) U = 0;
			day += 1;

		}

		if (distanceReached <= 0) cout << "failure on day " << day << "\n";
		else cout << "success on day " << day << "\n";

	}
	return 0;
}
