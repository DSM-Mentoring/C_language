//***
//**
//*
#pragma warning (disable : 4996)
#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	for (int i = num; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
