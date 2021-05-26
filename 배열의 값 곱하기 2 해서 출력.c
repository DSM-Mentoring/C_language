#pragma warning (disable : 4996)
#include <stdio.h>
int main() {
	int arr[5] = { 1, 3, 5, 7, 9 };
	for (int i = 0; i < 5; i++) {
		arr[i] *= 2;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
