//숫자 하나를 입력 받아서 그 크기의 사각형을 출력하는거 할 수 있으면 해오면 좋을거 같아요
//ex) 숫자 5를 입력했다면 5 x 5로 별찍기가 되어야 합니다
#pragma warning (disable : 4996)
#include <stdio.h>
int main() {
	int count;
	scanf("%d", &count);
	for (int i = 1; i <= count; i++) {
		for (int j = 1; j <= count; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}