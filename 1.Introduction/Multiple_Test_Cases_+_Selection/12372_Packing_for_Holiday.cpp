#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main () {
	int T;
	vector<int> a(3);
	cin >> T;
	for (int i = 1; i <= T; i++){
		cin >> a[0] >> a[1] >> a[2];
		if(a[0] <= 20 && a[1] <= 20 && a[2] <= 20) {
			cout << "Case " << i << ": " << "good\n";
		}else cout << "Case " << i << ": " << "bad\n";
	}
	return 0;
}
