#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RMate 5

void change(int* a, int* b)

{

	int n = *a;

	*a = *b;

	*b = n;

}

int main() {
	
	int k;
	char *room_mate[RMate] = {"������","��¡��","��ε��","������","������"};

	printf("�������,����'0'�˳���\n");
	while (1) {
		printf("�Ƿ��������������'1'�������һ��������ң� ");
		scanf("%d", &k);
		printf("\n");

		if (k == 0) {
			break;
		}
		else if (k > 1) {
			printf("������'1'��������'0'�˳���\n");
			continue;
		}
		else {
			int nIndex[RMate] = { 0 };
			srand(time(NULL));
			for (int i = 0;i != RMate;i++) {
				nIndex[i] = i;
			}
			for (int i = 0;i != RMate;i++) {
				change(&(nIndex[i]), &(nIndex[rand() % RMate]));
			}
			for (int i = 0; i != 1; i++)
			{
				printf("%s\n", room_mate[nIndex[i]]);
				printf("\n");

			}
		}
	}

	return 0;
}