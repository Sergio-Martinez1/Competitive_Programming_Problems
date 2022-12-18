#include <iostream>
#include <cmath>
using namespace std;

int main () {

	float R, N, result, a = 1;

	while (cin >> R >> N) {
		if (R == 0 && N == 0) break;
		result = ceil((R / N)) - 1;
		if (result > 26) cout << "Case " << a << ": impossible\n"; 
		else cout << "Case " << a << ": " << result << "\n";
		a++;

	} 

	return 0;
}
