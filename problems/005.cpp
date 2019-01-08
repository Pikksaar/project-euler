#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long long int n1 = 1;
	int n2 = 2, cont = 1;
	long long int mcm, mcd;

	while (cont < 20) {
		for (int i = 1; i <= n1 && i <= n2; i++) {
			if (n1 % i == 0 && n2 % i == 0)
				mcd = i;
		}
		mcm = (n1*n2)/mcd;
		n1 = mcm;
		n2++;
		cont++;
	}
	cout << "Problema 5: " << mcm << endl;

	return 0;
}
