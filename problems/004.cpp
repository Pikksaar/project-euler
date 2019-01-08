#include <iostream>
#include <math.h>

using namespace std;

int makePalin(int x){
	int result = x * 1000;
	result += x / 100;
	result += ((x / 10) % 10) * 10;
	result += (x % 10) * 100;
	return result;
}

int main(){
	long int maxPalin = 0;
	int i = 999;
	long int palindrome;
	int div2;

	bool found = false;

	while (found == false) {
		palindrome = makePalin(i--);
		for (int div1 = 100; div1*div1 <= palindrome; div1++) {
			if (palindrome % div1 == 0) {
				div2 = palindrome / div1;
				if (div2 < 100 || div2 > 999)
					continue;

				cout << "Problema 4: " << palindrome << endl;
				found = true;
				break;
			}
		}
	}

	return 0;
}
