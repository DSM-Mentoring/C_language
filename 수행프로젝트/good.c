#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

typedef struct _address {
	char name[20];
	char note[50];
	long long phone;
} Address;

// Address 구조체 안에 있는 char 배열인 name, note 변수가 = 연산자를 이용해 복사가 제대로 되지 않으므로 깊은 복사를 이용하는 Copy 함수를 만듦
void Copy(Address* origin, Address* cp) {
	strcpy(origin->name, cp->name);
	strcpy(origin->note, cp->note);
	origin->phone = cp->phone;
}

// 1
void add(Address* address) {
	printf("이름을 입력하시오. : ");
	scanf(" %s", address->name); // 입력받을때 입력값 앞에 스페이스를 넣어 엔터 등 버퍼에 남아있는 쓰레기 값을 처리해줌
	printf("메모를 작성하시오. : ");
	scanf(" %s", address->note);
	printf("전화번호를 입력하시오. : ");
	scanf(" %lld", &address->phone);
}

// 2
void drop(int *count, Address address[]) {
	char name[20];
	printf("삭제할 정보의 사람의 이름을 입력하시오. : ");
	scanf(" %s", name);
	for (int i = 0; i < *count; i++) { // count는 포인터 변수이므로 * 참조 연산자를 붙여 처리해줌
		if (!strcmp(address[i].name, name)) {
			if (i + 1 != *count) {
				for (int j = i; j < *count - 1; j++) {
					//address[j] = address[j + 1];
					Copy(&address[j], &address[j + 1]); // Copy로 처리한 것
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
		printf("%d 번째 목록\n", i + 1);
		printf("이름 : %s\n", address[i].name);
		printf("메모 : %s\n", address[i].note);
		printf("전화번호 : %lld\n\n", address[i].phone);
	}
}

int main() {
	Address address[5];
	int num, name, note, count = 0;
	while (1) {
		printf("0 - 프로그램종료 \n");
		printf("1 - 전화번호등록 \n");
		printf("2 - 전화번호삭제 \n");
		printf("3 - 전화번호목록 \n\n");
		printf("숫자를 입력하시오 : ");
		scanf(" %d", &num);
		switch (num) {
		case 0:
			printf("프로그램이 종료됩니다.\n\n");
			return 0;
		case 1:
			printf("\n전화번호를 등록하시오.\n\n");
			add(&address[count++]);
			break;
		case 2:
			printf("\n전화번호를 삭제하시오.\n\n");
			list(count, address);
			drop(&count, address);
			break;
		case 3:
			printf("\n전화번호 목록을 확인하시오.\n\n");
			list(count, address);
			break;
		default:
			printf("\n잘못 입력하셨습니다. \n\n");
			break;
		}
	}
}