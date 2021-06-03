#pragma warning (disable : 4996)
#include <stdio.h>

typedef struct _address {
	char name[20];
	char note[50];
	long long phone;
} Address;

// 3
void add(Address *address) {
	printf("�̸��� �Է��Ͻÿ�. : ");
	scanf("%s", address->name);
	printf("�޸� �ۼ��Ͻÿ�. : ");
	scanf("%s", address->note);
	printf("��ȭ��ȣ�� �Է��Ͻÿ�. : ");
	scanf("%lld", &address->phone);
}

// 4
void drop(int count, Address address[]) {
	list(count, address);
}


// 5
void list(int count, Address address[]) {
	for (int i = 0; i < count; i++) {
		printf("- - - - - - - - - - - - - - \n");
		printf("%d ��° ���\n", i+1);
		printf("�̸� : %s\n", address[i].name);
		printf("�޸� : %s\n", address[i].note);
		printf("��ȭ��ȣ : %lld\n", address[i].phone);
	}
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
				add(&address[count++]);
				break;
			case 4:
				printf("\n��ȭ��ȣ�� �����Ͻÿ�\n\n");
				drop(count, address);
				break;
			case 5:
				printf("\n��ȭ��ȣ ����� Ȯ���Ͻÿ�.\n\n");
				list(count, address);
				break;
			default:
				printf("\n�߸� �Է��ϼ̽��ϴ�. \n\n");
				break;
		}
	}
}
