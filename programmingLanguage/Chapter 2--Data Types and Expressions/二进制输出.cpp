#include<stdio.h>
#include<stdlib.h>
int main() {
	unsigned char i, j;
	printf("输入一个0-255的十进制整数:\n");
	scanf_s("%d", &i);
	printf("十进制：%d\n", i);
	printf("十六进制：%x\n", i);
	printf("八进制：%04o\n", i);
	j = (i >> 7)+48;
	printf("%1c",j);
	j = ((i >> 6)&0x01)+48;
	printf("%1c", j);
	j = ((i >> 5) & 0x01) + 48;
	printf("%1c", j);
	j = ((i >> 4) & 0x01) + 48;
	printf("%1c", j);
	j = ((i >> 3) & 0x01) + 48;
	printf("%1c", j);
	j = ((i >> 2) & 0x01) + 48;
	printf("%1c", j);
	j = ((i >> 1) & 0x01) + 48;
	printf("%1c", j);
	j = (i & 0x01) + 48;
	printf("%1c", j);
	system("pause");
	return 0;
}