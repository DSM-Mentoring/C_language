//���� �ϳ��� �Է� �޾Ƽ� �� ũ���� �簢���� ����ϴ°� �� �� ������ �ؿ��� ������ ���ƿ�
//ex) ���� 5�� �Է��ߴٸ� 5 x 5�� ����Ⱑ �Ǿ�� �մϴ�
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