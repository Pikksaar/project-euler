#include <iostream>

#define LIMIT 1000000

int main(){
	unsigned int maxLenght = 0;
	unsigned int largest = 0;

	for (unsigned int n = 2; n < LIMIT; n++) {
		unsigned int number = n;
		unsigned int cntr = 1;

		while(number > 1) {
			if (number % 2)
				number = 3*number + 1;
			else
				number /= 2;
			cntr++;
		}

		if (cntr > maxLenght) {
			maxLenght = cntr;
			largest = n;
		}
	}

	std::cout << "The number which produces the largest chain is: " << largest << std::endl;
	std::cout << "The lenght of the maximum chain achieved is: " << maxLenght << std::endl;
	return 0;
}
