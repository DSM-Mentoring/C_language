//[문제]
//1부터 10중에서 홀수를 줄별로 내림차순으로 출력하시오.
//(for문 while문 둘 다 시도해보세요)

//while문(실행X)
/*#pragma warning (disable : 4996)
#include <stdio.h>
int main() {
	int num, count = 1, hol = 0;
	scanf("%d", &num);
	while (count <= num) {
		if (num % 2 == 1)
			hol++;
	}
	printf("%d \n", hol);
	return 0;
*/

//for문(실행X)
/*#pragma warning (disable : 4996)
#include <stdio.h>
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i > 10; i++);
	printf("%d", num);
	return 0;
}*/