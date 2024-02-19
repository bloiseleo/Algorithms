#include <stdio.h>

void display(int arr[], int len) {
	printf("Showing state of list!\n");
	for(int i = 0; i < len;i++) {
		printf("%d - %d\n", i, arr[i]);
	}
}

void insertionSort(int* arr, int len) {
	for(int i = 1; i < len; i++) {
		int v = arr[i];
		int b = i - 1;
		while(b >= 0 && arr[b] > v) {
			arr[b + 1] = arr[b];
			b--;
		}
		arr[b + 1] = v;
	}
}

int main() {
	int arr[10] = {8, 3, 4, 2, 1, 5, 7, 1, 23, 12};
	insertionSort(arr, 10);
	display(arr, 10);
	return 0;
}
