#include <bits/stdc++.h>
#include <cctype>
#include <iomanip>
#include <string>
using namespace std;

/**
* @return the index of the character in the vector or -1 if doesn't match 
**/
int binary_search_char (vector<char> chars, char c) {

	int l = 0;
	int r = chars.size() - 1;
	int o = -1;
	while (r>=l) {
		int m = (l + r) / 2;
		if(chars[m] == c) {
			o = m;
			break;
		}else if(chars[m] < c){
			l = m + 1;
		}else if(chars[m] > c){
			r = m - 1;
		}
	}
	return o;

}

int main () {

	string name;
	int i = 0;
	vector<float> namesAsNumbers(2);
	vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
							 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	while (getline(cin, name)) {
		int sum = 0;
		int search;
		/*
		 * Encontramos el valor de cada caracter del nombre segun el abecedario 
		 * hacemos la suma de todos los valores del nombre
		*/
		for (char c: name) {
			c = tolower(c);
			search = binary_search_char(alphabet, c);
			if (search < 0 ) continue;
			sum += (search + 1);
        }
		/*
		 * Si la suma es de dos o mas digitos, sumamos sus digitos hasta tener 1
		*/
		float nameSum = 0;
		while (sum != 0) {
			nameSum = nameSum + sum % 10;
			sum = sum / 10;
			if (sum == 0 && nameSum > 9) {
				sum = nameSum;
				nameSum = 0;
			}
		}

		namesAsNumbers[i] = nameSum;
		i++;
		if (i == 2) {
			i = 0;
			nameSum = namesAsNumbers[0]/namesAsNumbers[1];
			if(nameSum > 1) nameSum = 1/nameSum;
			nameSum *= 100;
			cout << fixed << setprecision(2)<< nameSum << " %\n";
		} 
	}
	return 0;
}

