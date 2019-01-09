#include<stdio.h>
#include<stdlib.h>
int main() {
	char x = 111;// 二进制位0110 1111   
	char y;
	//将第二位清零
	x = x & ~2;
	//将第四位设置为1
	x = x | 8;
	//将第六位取反
	x = x ^ 32;
	printf("输出十进制:%d\n", x);
	printf("输出八进制:%o\n", x);
	printf("输出16进制:%0x\n", x);
	printf("输二进制:");
	//将十进制转换为二进制
	for (int i = 7; i >= 0; i--) {
		y = (x >> i) & 1;
		printf("%d", y);
	}
	printf("\n");
	system("pause");
	return 0;
}