// 5ĭ �迭
// 2-5���� ���� �Է¹ޱ�
// �Է¹��� �� ��ŭ �迭�� ��� �߰�
// �迭�� �������� ���
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