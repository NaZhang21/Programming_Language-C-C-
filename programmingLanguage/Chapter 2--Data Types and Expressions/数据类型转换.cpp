#include<stdio.h>
#include<stdlib.h>
int main() {
	int i = 5;
	float f = 73.6;
	char c = 'a';
	i = (int)f;//�Զ�����ת��
	f = c;
	c = i;
	printf("i=%d\n", i);
	printf("f=%.2f\n", f);
	printf("c=%c\n", c);
	//ǿ������ת��
	int a = 10;
	float b;
	b = (float)a;
	printf("ǿ������ת����%.1f\n", b);
	putchar('A');
	putchar(97);
	printf("���������Ϊ��\n");
	int x, y;
	char z;
	scanf_s("%d%d %c", &x, &y, &z);
	printf("x=%d\n", x);
	printf("y=%d\n", y);
	printf("z=%c\n", z);

	system("pause");
	return 0;
}