#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int numeroEval;
	cout << "\nHallare el mayor factor primo de: ";
	cin >> numeroEval;
	int maxPrimo = 0;
	long int div3 = 2;
	while (numeroEval != 1) {
		while (numeroEval % div3 == 0) {
			numeroEval /= div3;
		}
		if (maxPrimo < div3) {
			maxPrimo = div3;
			div3++;
		}
	}
	cout << "Problema 3: " << maxPrimo << endl;

	return 0;
}
