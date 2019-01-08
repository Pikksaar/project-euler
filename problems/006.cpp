#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long int sqrSum = 0;
	long int sumSqr = 0;

	for (int x = 1; x <= 100; x++) {
		sqrSum += x*x;
		sumSqr += x;
	}
	sumSqr = sumSqr*sumSqr;

	cout << "Problema 6: " << sumSqr - sqrSum << endl;

	return 0;
}
