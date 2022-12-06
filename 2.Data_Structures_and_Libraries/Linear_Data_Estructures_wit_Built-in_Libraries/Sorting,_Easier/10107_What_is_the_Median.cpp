#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main () {

	int x;
	vector<int> a;

	while (cin >> x) {
		a.push_back(x);
		sort(a.begin(), a.end());
		int median = a.size()/2;
		if(a.size()%2 == 0){
			median = (a[median] + a[median-1])/2;
		}else {
			median = a[median];
		}
		cout << median << "\n";
	}
	return 0;
}
