#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, r;
	long result = 1;
	r = scanf_s("%d", &n);
	if (r < 1) {
		printf("error");
		return -1;
	}
	for (int i = 1; i <= 5; i++) {
		result *= n;
		printf(" %1d ", result);
	}
	printf("\n");
	system("pause");
	return 0;

}