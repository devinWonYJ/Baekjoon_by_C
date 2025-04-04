#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int result = 0;

	for (int i = 1; i <= n; i++) {
		result += i;
	}

	printf("%d", result);

	return 0;
}