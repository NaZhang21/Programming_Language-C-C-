#include<stdio.h> //输入输出的头文件
#include<stdlib.h> // 停止程序运行的头文件//主要学习停止程序运行和输出格式
int main() {
	int x = 1, y = 2, z;
	z = x + y;
	printf("%d+%d=%d\n", x, y, z);
	//getchar();
	system("pause");
	return 0;
}