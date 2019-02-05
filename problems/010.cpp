#include <bits/stdc++.h>

using namespace std;

int main(){
	long int limite3 = 2000000;
	long long int sumPrimos = 5;
	long int eval2 = 5;

	while (eval2 < limite3) {
		// Saber si es primo
		for (int x = 2; x <= sqrt(eval2); x++) {
			if (eval2 % x) {
				if (x == int(sqrt(eval2))) {
					sumPrimos += eval2;
				}
			}
			else{
				break;
			}
		}
		eval2 += 2;
	}
	cout << "Problema 10: " << sumPrimos << endl;

	return 0;
}
