# include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;

	for (int j = 1; j <= n; j++){

		string link;
		vector<string> links(10);
		int relevance;
		vector<int> relevances(10);

		for (int i = 0; i < 10; i++) {

			cin >> link;
			cin >> relevance;

			if (relevances.empty()) {

				relevances.push_back(relevance);
				links.push_back(link);

			}
			else if (relevance > relevances[0]) {

				relevances.clear();
				links.clear();
				relevances.push_back(relevance);
				links.push_back(link);

			}else if (relevance == relevances[0]) {

				relevances.push_back(relevance);
				links.push_back(link);

			}

		}

		cout << "Case #" << j << ":\n";

		int a = links.size();
		for(int i = 0; i < a; i++){
			cout << links[i]<< "\n";
		}

	}
	return 0;
}
