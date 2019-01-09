#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j;
	for (i = 1; i < 10; i++) {
		printf("%4d",i);
	}
	printf("\n-------------------------------------\n");
	for (i = 1; i < 10; i++) {   //控制行
		for (j = 1; j < 10; j++) {   //控制列
			if (j != 9) {
				printf("%4d", i*j);
			}
			else {
				printf("%4d\n",i*j);
			}
		}
	}
	system("pause");
	return 0;
}