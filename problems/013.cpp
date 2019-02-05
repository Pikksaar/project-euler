#include <bits/stdc++.h>

#define SIZE 100
#define DIGITS_PER_NUMBER 50

void printArr(int *arr, int arrSize){
	for (int i = 0; i < arrSize; i++, arr++)
		std::cout << *arr;
	std::cout << std::endl;
}

void reverseArr(int arr[], int arrSize){
	for (int i = 0; i < arrSize/2; i++) {
		int temp = arr[i];
		arr[i] = arr[arrSize-i-1];
		arr[arrSize-i-1] = temp;
	}
}

int main(){
	std::string nums[SIZE];
	for (int i = 0; i < SIZE; i++)
		std::cin >> nums[i];

	int res[10];
	int extra = 0;
	for (int i = 0; i < DIGITS_PER_NUMBER; i++) {
		for (int j = 0; j < SIZE; j++)
			extra += nums[j][49-i] - '0';

		if (i >= 42) { // 42 because it will take 2 more digits when in the last number
			std::string num = std::to_string(extra);

			if (i == 49) {
				res[7] = num[2] - '0';
				res[8] = num[1] - '0';
				res[9] = num[0] - '0';
			}
			else res[i-42] = num[2] - '0';
		}

		extra /= 10;
	}

  std::cout << "\nThe first 10 digits of the sum are: ";
	reverseArr(res, 10);
	printArr(res, 10);

	return 0;
}
