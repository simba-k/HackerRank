#include <stdio.h>

void printArray(int size, int ar[]) {
	for(int i = 0; i < size; i++) {
		printf("%d ", ar[i]);
	}
	printf("\n");
}

void quickSort(int size, int ar[]) {
	if(size <= 1) {
		return;
	}
	int h = 0;
	int l = 0;
	int arh[size];
	int arl[size];
	int part = ar[0];
	for(int i = 1; i < size; i++) {
		if(ar[i] < part) {
			arl[l++] = ar[i];
		}else{
			arh[h++] = ar[i];
		}
	}
	quickSort(l, arl);
	quickSort(h, arh);
	int ari = 0;
	for(int i = 0; i < l; i++) {
		ar[ari++] = arl[i];
	}
	ar[ari++] = part;
	for(int i = 0; i < h; i++) {
		ar[ari++] = arh[i];
	}
	printArray(size, ar);
}

int main() {
	int ar[7] = {5,8,1,3,7,9,2};
	quickSort(7, ar);
	/*int ar_size;
	scanf("%d", &ar_size);
	int ar[ar_size], ar_i;
	for(ar_i = 0; ar_i < ar_size; ar_i++) {
		scanf("%d", &ar[ar_i]);
	}
	quickSort(ar_size, ar);
	return 0;*/
}
