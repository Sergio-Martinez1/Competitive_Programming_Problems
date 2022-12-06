#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	string one = "one";
	string two = "two";
	string three = "three";
	string guess;

	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> guess;	
		int error = 0;

		if (guess.length() <= 3){

			for(int j = 0; j < guess.length(); j++){
				if(guess[j] != one[j]) error++;
			}

			if(error <= 1) {
				cout << 1 << "\n";
			}else{
				error = 0;
				for(int j = 0; j < guess.length(); j++){
					if(guess[j] != two[j]) error++;
				}
				if(error <= 1) cout << 2 << "\n";;
			}

		}else {

			for(int j = 0; j < guess.length(); j++){
				if(guess[j] != three[j]) error++;
			}
			if(error <= 1) cout << 3 << "\n";;

		}

	}
	return 0;
}
