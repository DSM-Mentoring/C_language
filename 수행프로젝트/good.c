#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

typedef struct _address {
	char name[20];
	char note[50];
	long long phone;
} Address;

// Address ����ü �ȿ� �ִ� char �迭�� name, note ������ = �����ڸ� �̿��� ���簡 ����� ���� �����Ƿ� ���� ���縦 �̿��ϴ� Copy �Լ��� ����
void Copy(Address* origin, Address* cp) {
	strcpy(origin->name, cp->name);
	strcpy(origin->note, cp->note);
	origin->phone = cp->phone;
}

// 1
void add(Address* address) {
	printf("�̸��� �Է��Ͻÿ�. : ");
	scanf(" %s", address->name); // �Է¹����� �Է°� �տ� �����̽��� �־� ���� �� ���ۿ� �����ִ� ������ ���� ó������
	printf("�޸� �ۼ��Ͻÿ�. : ");
	scanf(" %s", address->note);
	printf("��ȭ��ȣ�� �Է��Ͻÿ�. : ");
	scanf(" %lld", &address->phone);
}

// 2
void drop(int *count, Address address[]) {
	char name[20];
	printf("������ ������ ����� �̸��� �Է��Ͻÿ�. : ");
	scanf(" %s", name);
	for (int i = 0; i < *count; i++) { // count�� ������ �����̹Ƿ� * ���� �����ڸ� �ٿ� ó������
		if (!strcmp(address[i].name, name)) {
			if (i + 1 != *count) {
				for (int j = i; j < *count - 1; j++) {
					//address[j] = address[j + 1];
					Copy(&address[j], &address[j + 1]); // Copy�� ó���� ��
				}
			}
			(*count)--;
			break;
		}
	}
}

// 3
void list(int count, Address address[]) {
	for (int i = 0; i < count; i++) {
		printf("- - - - - - - - - - - - - - \n");
		printf("%d ��° ���\n", i + 1);
		printf("�̸� : %s\n", address[i].name);
		printf("�޸� : %s\n", address[i].note);
		printf("��ȭ��ȣ : %lld\n\n", address[i].phone);
	}
}

int main() {
	Address address[5];
	int num, name, note, count = 0;
	while (1) {
		printf("0 - ���α׷����� \n");
		printf("1 - ��ȭ��ȣ��� \n");
		printf("2 - ��ȭ��ȣ���� \n");
		printf("3 - ��ȭ��ȣ��� \n\n");
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf(" %d", &num);
		switch (num) {
		case 0:
			printf("���α׷��� ����˴ϴ�.\n\n");
			return 0;
		case 1:
			printf("\n��ȭ��ȣ�� ����Ͻÿ�.\n\n");
			add(&address[count++]);
			break;
		case 2:
			printf("\n��ȭ��ȣ�� �����Ͻÿ�.\n\n");
			list(count, address);
			drop(&count, address);
			break;
		case 3:
			printf("\n��ȭ��ȣ ����� Ȯ���Ͻÿ�.\n\n");
			list(count, address);
			break;
		default:
			printf("\n�߸� �Է��ϼ̽��ϴ�. \n\n");
			break;
		}
	}
}