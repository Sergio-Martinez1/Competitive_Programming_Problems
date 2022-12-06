#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main () {
	//Test cases t (1<=t<=100)
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		//Number of stores n (1<=n<=20)
		int n;
		cin >> n;
		vector<int> x(n);
		for (int j = 0; j < n; j++){
			//Positions on Long Street x (0<=x<=99)
			cin >> x[j];
			if (cin.peek() == '\n') break;
		}
		sort(x.begin(), x.end());
		int minDistance = (x[n-1] - x[0])*2;
		cout << minDistance << "\n";
	}
	return 0;
}
