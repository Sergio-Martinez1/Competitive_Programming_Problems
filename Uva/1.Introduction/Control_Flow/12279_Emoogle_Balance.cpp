#include <bits/stdc++.h>
using namespace std;

int main () {
	int N, j = 1;
	while (cin >> N){
		int y = 0, M;
		for (int i = 1; i <= N; i++){
			cin >> M;
			if (M == 0) y--;
			else y++;
		}
		if (N > 0){
			cout << "Case " << j << ": " << y << "\n";
		}
		j++;
	}
	return 0;
}
