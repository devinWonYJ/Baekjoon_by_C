#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	for (int i = N-1; i >= 0; --i) {
		for (int j = 1; j <= i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= N - i; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
