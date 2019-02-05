#include <bits/stdc++.h>

int divsQuantity(unsigned int n){
	int counter = 0;

	for (unsigned int div = 2; div*div <= n; div++)
		if (!(n % div)) {
			if (div*div == n) counter++;
			else counter += 2;
		}

	return counter;
}

int main(){
	unsigned int order = 1;
	unsigned int triangleNum = 0;

	int divsToFind;
	std::cin >> divsToFind;

	while (true) {
		triangleNum += order;

		if (divsQuantity(triangleNum) > divsToFind) break;
		else order++;
	}
	std::cout << triangleNum << std::endl;

	return 0;
}
