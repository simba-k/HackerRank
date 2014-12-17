#include <stdio.h>

void printArr(int ar_size, int *ar) {
	int i;
	for(i = 0; i < ar_size - 1; i++) {
		printf("%d ", ar[i]);
	}
	printf("%d\n", ar[i]);
}

void rotateRight(int size, int offset, int *ar) {
	int last = ar[offset + size - 1];
	int buf1 = ar[offset];
	for(int i = 0; i < size; i++) {
		int tmp = ar[offset + i];
		ar[offset + i] = buf1;
		buf1 = tmp;
	}
	ar[offset] = last;
}

void insertionSort(int ar_size, int *ar) {
	for(int i = 1; i < ar_size; i++) {
		for(int j = 0; j < i; j++) {
			if(ar[i] < ar[j]) {
				rotateRight(i + 1 - j, j, ar);
				break;
			}
		}
		printArr(ar_size, ar);
	}
}

int main() {
	int arr[5] = {6, 3, 1, 5, 1};
	insertionSort(5, arr);
	return 0;
}
