// 5칸 배열
// 2-5사이 숫자 입력받기
// 입력받은 수 만큼 배열에 요소 추가
// 배열을 역순으로 출력
#pragma warning (disable : 4996)
#include <stdio.h>
int main() {
	int arr[5];
	int num, plus;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = num - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
	return 0;
}