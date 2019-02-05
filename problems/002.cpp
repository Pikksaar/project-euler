#include <bits/stdc++.h>

using namespace std;

int main(){
	long int limiteFibo = 4000000;
	int f1 = 1;
	int f2 = 2;
	int f3 = f1 + f2;

	long int sumFibo = f2;

	while (f3 < limiteFibo) {
		f3 = f2 + f1;
		if (f3 > limiteFibo) break;
		f1 = f2;
		f2 = f3;
		if (f3 % 2 == 0) sumFibo += f3;
	}

	cout << "Problema 2: " << sumFibo << endl;

	return 0;
}
