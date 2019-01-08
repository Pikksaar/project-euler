#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long int a = 0, b, c, c2;
	bool found2 = false;
	while (found2 == false) {
		a++;
		for (b = a+1; (a + b) < 1000; b++) {
			c2 = (a*a + b*b);
			c = sqrt(c2);
			if (c*c != c2)
				continue;
			if ((a+b+c) == 1000 && c > b) {
				found2 = true;
				break;
			}
		}
	}
	cout << "Problema 9: " << (a*b*c) << endl;

	return 0;
}
