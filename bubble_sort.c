#include <stdio.h>
int number_arr[10];
int main() 
{
	
	printf("Please input 8 numbers: ");
	scanf_s("%d %d %d %d %d %d %d %d", &number_arr[0], &number_arr[1], &number_arr[2], &number_arr[3], &number_arr[4], &number_arr[5], &number_arr[6], &number_arr[7]);
	for (int i = 0; i < 7; i++) {

		for (int k = 0; k < 8 - i-1; k++) {
			if (number_arr[k] > number_arr[k + 1]) {
				int temp = number_arr[k];
				number_arr[k] = number_arr[k + 1];
				number_arr[k + 1] = temp;
			}
		}

	}
	printf("After sorting:");
	for (int i = 0; i < 8; i++) {
		printf(" %d ", number_arr[i]);
	}
	return 0;
}