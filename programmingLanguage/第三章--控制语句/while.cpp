#include<stdio.h>
#include<stdlib.h>
/*����һ���ַ���������ַ�����*,��������ַ����������ֹͣ
*/
int main() {
	char c;
	c = getchar();
	while (c!='*')
	{
		putchar(c);
		c = getchar();
	};
	system("pause");
	return 0;
}