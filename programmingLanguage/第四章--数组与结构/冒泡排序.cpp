#include<stdio.h>
#include<stdlib.h>
//����ð�������������д�С���������
int main() {
	int a[6] = { 16,8,4,32,5,9 };
	int i, j,temp;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 6; i++) {
		printf("%4d", a[i]);
	}
	system("pause");
	return 0;
}