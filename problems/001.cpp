#include <bits/stdc++.h>

using namespace std;

int main(){
	int limite2;
	cout << "\nSuma de los multiplos de 3 o 5 menores a: ";
	cin >> limite2;
	int sumMults = 0;
	for (int nums = 3; nums < limite2; nums++) {
		if ((nums % 3 == 0) || (nums % 5 == 0)) {
			sumMults += nums;
		}
	}
	cout << "Problema 1: " << sumMults << endl;

	return 0;
}
