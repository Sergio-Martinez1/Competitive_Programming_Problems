#include <bits/stdc++.h>
using namespace std;

int main () {
	int a, b;
	while (cin >> a >> b) {
		if(a < 0 && b < 0) break;
		int mov = 0;
		if ((abs(a-b)>50)){
			mov = abs(abs(a - b) - 100) ;
		}else {
			mov = abs(a - b);
		}
		cout << mov << "\n";
	}
	return 0;
}
