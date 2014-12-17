#include <stdio.h>

void printArr(int ar_size, int *ar) {
	int i;
	for(i = 0; i < ar_size - 1; i++) {
		printf("%d ", ar[i]);
	}
	printf("%d\n", ar[i]);
}

void insertionSort1(int ar_size, int *ar) {
	int moving = 0;
	for(int i = ar_size - 1;  i >= 0; i--) {
		int cur = ar[i];
		for(int j = i - 1; j >= 0; j--) {
			if(ar[j] > cur) {
				ar[j + 1] = ar[j];
				moving = 1;
				printArr(ar_size, ar);
			}else if(moving) {
				ar[j + 1] = cur;
				printArr(ar_size, ar);
				moving = 0;
			}
			if(moving && j == 0) {
				ar[0] = cur;
				printArr(ar_size, ar);
				moving = 0;
			}
		}
	}
}

int insertionSort(int ar_size, int *ar) {
		for(int i = 2; i <= ar_size; i++) {
			insertionSort1(i, ar);
		}
}

int main() {
	int arr[5] = {4, 4, 4, 9, 1};
	insertionSort(5, arr);
	return 0;
}
