#include <bits/stdc++.h>
using namespace std;

int main () {

	int T, N;
	cin >> T ;

	for(int i = 1; i <= T; i++){

		cin >> N;
		vector<int> w(N);

		for(int j = 0; j < N; j++) cin >> w[j];

		int arriba = 0, abajo = 0;

		for(int j = 0; j < N-1; j++){
			if (w[j] < w[j + 1]) arriba++;
			if (w[j] > w[j + 1]) abajo++;
		}

		cout << "Case " << i << ": " << arriba << " " << abajo << "\n";

	}
	return 0;
}
