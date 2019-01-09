#include<stdio.h>
#include<stdlib.h>
/*
一只公鸡5钱
一只母鸡3钱
三只小鸡1钱
百钱买百鸡
*/
int main() {
	int i, j, k;
	for (i = 0; i *5<= 100; i++) {
		for ( j = 0; i*5+j*3 <=100; j++)
		{
			if (i + j + (100 - i * 5 - j * 3) * 3 == 100)
				printf("%d,%d,%d\n", i, j, 100-i-j);
		}
	}
	system("pause");
	return 0;
}