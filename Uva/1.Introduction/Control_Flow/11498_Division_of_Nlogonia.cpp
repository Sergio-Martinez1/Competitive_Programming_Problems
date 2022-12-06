#include <bits/stdc++.h>
using namespace std;

int main () {
	/*
	 * K number of queries 
	 * N and M the coordinates of division point
	 * X and Y the coordinates of a residence
	*/
	int K, N, M;
	while (cin >> K) {
		if (K == 0) break;
		cin >> N >> M;
		while (K--) {
			int X, Y;
			cin >> X >> Y;
			if (X == N || Y == M) cout << "divisa\n";
			else if (X > N && Y > M) cout << "NE\n" ;
			else if (X > N && Y < M) cout << "SE\n";
			else if (X < N && Y > M) cout << "NO\n";
			else if (X < N && Y < M) cout << "SO\n";
		}
	}
	return 0;
}
