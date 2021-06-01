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
		printf("1 - 이름번경 \n");
		printf("2 - 메모하기 \n");
		printf("3 - 전화번호등록 \n");
		printf("4 - 전화번호삭제 \n");
		printf("5 - 전화번호목록 \n");
		scanf(" %d", &num);
		switch (num) {
		case '1':
			printf("이름을 입력하시오.\n");
			break;
		case '2':
			printf("메모를 작성하시오.\n");
			break;
		case '3':
			printf("전화번호를 등록하시오.\n");
			break;
		case '4':
			printf("전화번호를 삭제하시오\n");
			break;
		case '5':
			printf("전화번호 목록을 확인하시오.\n");
			break;
		}
	}
}
