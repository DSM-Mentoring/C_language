#pragma warning (disable : 4996)
#include <stdio.h>

typedef struct address {
	char name[20];
	long long phone;
	char note[50];
} Address;

int main() {
	Address address[5];
	int num;
	while (1) {
		printf("1 - �̸����� \n");
		printf("2 - �޸��ϱ� \n");
		printf("3 - ��ȭ��ȣ��� \n");
		printf("4 - ��ȭ��ȣ���� \n");
		printf("5 - ��ȭ��ȣ��� \n");
		scanf(" %d", &num);
		switch (num) {
		case '1':
			printf("�̸��� �Է��Ͻÿ�.\n");
			break;
		case '2':
			printf("�޸� �ۼ��Ͻÿ�.\n");
			break;
		case '3':
			printf("��ȭ��ȣ�� ����Ͻÿ�.\n");
			break;
		case '4':
			printf("��ȭ��ȣ�� �����Ͻÿ�\n");
			break;
		case '5':
			printf("��ȭ��ȣ ����� Ȯ���Ͻÿ�.\n");
			break;
		}
	}
}
