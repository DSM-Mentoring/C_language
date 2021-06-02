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
	printf("이름을 입력하시오. : ");
	scanf("%s", address.name);
	printf("메모를 작성하시오. : ");
	scanf("%s", address.note);
	printf("전화번호를 입력하시오. : ");
	scanf("%lld", &address.phone);
}

int main() {
	Address address[5];
	int num, name, note, count = 0;
	while (1) {
		printf("1 - 이름변경 \n");
		printf("2 - 메모하기 \n");
		printf("3 - 전화번호등록 \n");
		printf("4 - 전화번호삭제 \n");
		printf("5 - 전화번호목록 \n\n");
		printf("숫자를 입력하시오 : ");
		scanf("%d", &num);
		switch (num) {
			case 1:
				printf("\n이름을 입력하시오.\n\n");
				break;
			case 2:
				printf("\n메모를 작성하시오.\n\n");
				break;
			case 3:
				printf("\n전화번호를 등록하시오.\n\n");
				add(address[count++]);
				break;
			case 4:
				printf("\n전화번호를 삭제하시오\n\n");
				break;
			case 5:
				printf("\n전화번호 목록을 확인하시오.\n\n");
				break;
			default:
				printf("\n잘못 입력하셨습니다. \n\n");
				break;
		}
	}
}
