#include <bits/stdc++.h>
using namespace std;

int turn_clock_wise (int initial, int final, int range) {

	int conversion = 360/range;
	initial = conversion * initial;
	final = conversion * final;
	int movements = final - initial;

	if (movements < 0) movements += 360;

	return movements;

} 
int turn_counter_clock_wise (int initial, int final, int range) {

	int conversion = 360/range;
	initial = conversion * initial;
	final = conversion * final;
	int movements = final - initial;

	if (movements > 0) movements -= 360;

	return abs(movements);

} 

int main () {

	int i, x, y, z, movements = 0;

	while (cin >> i >> x >> y >> z) {	

		if (i == x && x == y && y == z && z == 0) break;

		movements = 0;
		movements += 360;
		movements += 360;
		movements += turn_counter_clock_wise(i, x, 40);
		movements += 360;
		movements += turn_clock_wise(x, y, 40);
		movements += turn_counter_clock_wise(y, z, 40);

		cout << movements << "\n";

	}

	return 0;

}
