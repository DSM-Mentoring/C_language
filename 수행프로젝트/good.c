#pragma warning (disable : 4996)
#include <stdio.h>

typedef struct _address {
	char name[20];
	char note[50];
	long long phone;
} Address;

void add(Address address) {
	char name[20];
	char note[50];
	long long phone;
	printf("�̸��� �Է��Ͻÿ�. : ");
	scanf("%s", address.name);
	printf("�޸� �ۼ��Ͻÿ�. : ");
	scanf("%s", address.note);
	printf("��ȭ��ȣ�� �Է��Ͻÿ�. : ");
	scanf("%lld", &address.phone);
}

int main() {
	Address address[5];
	int num, name, note, count = 0;
	while (1) {
		printf("1 - �̸����� \n");
		printf("2 - �޸��ϱ� \n");
		printf("3 - ��ȭ��ȣ��� \n");
		printf("4 - ��ȭ��ȣ���� \n");
		printf("5 - ��ȭ��ȣ��� \n\n");
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf("%d", &num);
		switch (num) {
			case 1:
				printf("\n�̸��� �Է��Ͻÿ�.\n\n");
				break;
			case 2:
				printf("\n�޸� �ۼ��Ͻÿ�.\n\n");
				break;
			case 3:
				printf("\n��ȭ��ȣ�� ����Ͻÿ�.\n\n");
				add(address[count++]);
				break;
			case 4:
				printf("\n��ȭ��ȣ�� �����Ͻÿ�\n\n");
				break;
			case 5:
				printf("\n��ȭ��ȣ ����� Ȯ���Ͻÿ�.\n\n");
				break;
			default:
				printf("\n�߸� �Է��ϼ̽��ϴ�. \n\n");
				break;
		}
	}
}
