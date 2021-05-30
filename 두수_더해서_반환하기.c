#pragma warning (disable : 4996)
#include <stdio.h>
int add(a, b) {
	return a + b;
}

int main() {
	int a, b, result;
	scanf("%d %d", &a, &b);
	result = add(a, b);
	printf("%d", result);
	return 0;
}