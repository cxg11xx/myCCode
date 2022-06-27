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
	char *room_mate[RMate] = {"陈锡共","张隆立","周蔚彬","陈启豪","陈忠威"};

	printf("随机点名,输入'0'退出。\n");
	while (1) {
		printf("是否随机点名，输入'1'将随机点一名幸运玩家： ");
		scanf("%d", &k);
		printf("\n");

		if (k == 0) {
			break;
		}
		else if (k > 1) {
			printf("请输入'1'点名或者'0'退出。\n");
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