#include <bits/stdc++.h>
#include <string>
using namespace std;

int main () {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string result;
		cin >> result;
		long long count = 0, score = 0;
		long long size = result.size();
		for (long long j = 0; j < size; j++) {
			if (result[j] == 'O') {
				count++;
				score += count;
			}else if (result[j] == 'X'){
				count = 0;
			}
		}
		cout << score << "\n";
	}
	return 0;
}
