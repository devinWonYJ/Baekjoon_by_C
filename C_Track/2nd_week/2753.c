#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);

	int result = 0;

	if ((N % 4 == 0 && N % 100 != 0) || N % 400 == 0) {
		result = 1;
	}

	printf("%d", result);

	return 0;
}