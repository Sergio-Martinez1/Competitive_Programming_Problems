#include <bits/stdc++.h>
using namespace std;

int main () {
	int T, N;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		int y = 0;
		while (cin >> N) {
			char c = cin.peek();
			if(y < N) {
				y = N;
			}	
			if(c == '\n') break;
	  	}
		cout << "Case " << i << ": " << y << "\n";
	}
	return 0;
}
