#include <bits/stdc++.h>
using namespace std;

int main () {
	/*
	 * N number of participants
	 * B budget
	 * H number of hotels
	 * W number of weeks you can choose between
	 * p price for one person staying the weekend
	 * a number of available beds for each weekend
	 * goodHotel the minimum cost for the best hotel
	*/
	int B, H, W;
	long long N, goodHotel;
	while (cin >> N >> B >> H >> W) {

		goodHotel = 0;

		while (H--) {

			int a;
			long long p;
			bool good = false;	
			cin >> p;

			for (int i = 0; i < W; i++) {
				cin >> a;
				if (a >= N) good = true;
			}

			if (goodHotel == 0) {
				if (good == true && p * N <= B) goodHotel = p * N;
			} else if (good == true && p * N <= B && p * N < goodHotel) goodHotel = p * N;

		}

		if (goodHotel == 0) cout << "stay home\n";
		else cout << goodHotel << "\n";
	}
	return 0;
}
