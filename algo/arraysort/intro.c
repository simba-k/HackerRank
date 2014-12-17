#include <stdio.h>

int linearSearch(int arr[], int query, int size);

int main() {
	int  n;
	int qry;
	scanf("%d\n%d\n", &qry, &n);
	int arr[n];
	int *arrp = arr;
	for(int i = 0; i < n; i++)
		scanf("%d", arrp++);
	int loc = linearSearch(arr, qry, n);
	printf("%d", loc);
	return 0;
}

int linearSearch(int arr[], int query, int size) {
	for(int i = 0; i < size; i++)
		if(arr[i] == query)
			return i;
	return -1;
}
