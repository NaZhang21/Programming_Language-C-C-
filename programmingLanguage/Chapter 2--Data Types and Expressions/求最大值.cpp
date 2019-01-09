#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	printf("请输入两个整数变量：");
	scanf_s("%d %d", &a, &b);
	if (a > b) printf("最大值是：%d",a);
	else printf("最大值是：%d",b);
	system("pause");
	return 0;
}
