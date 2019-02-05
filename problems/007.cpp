#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
	long int limite = 10001;
	int contPrimos = 2;
	long int eval = 3;
	while (contPrimos < limite) {
		eval += 2;
		for (int x = 2; x <= sqrt(eval); x++) {
			if (eval % x) {
				if (x == int(sqrt(eval))) {
					contPrimos++;
				}
			}
			else{
				break;
			}
		}
	}
	cout << "Problema 7: " << eval << endl;

	return 0;
}
