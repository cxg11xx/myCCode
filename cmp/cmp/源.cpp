#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a, b;
	int max(int x, int y);
	scanf("%d %d", &a, &b);
	printf("max=%d\n", max(a, b));
}

int max(int x, int y) {
	if (x < y) {
		return y;
	}
	else {
		return x;
	}
}