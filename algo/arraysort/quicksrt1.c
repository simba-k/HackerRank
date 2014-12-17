#include <stdio.h>

void printArray(int size, int ar[]) {
	for(int i = 0; i < size; i++) {
		printf("%d ", ar[i]);
	}
}

void partition(int size, int ar[]) {
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
	int ar[5] = {4,5,3,7,2};
	partition(5, ar);
	/*int ar_size;
	scanf("%d", &ar_size);
	int ar[ar_size], ar_i;
	for(ar_i = 0; ar_i < ar_size; ar_i++) {
		scanf("%d", &ar[ar_i]);
	}
	partition(ar_size, ar);
	return 0;*/
}
