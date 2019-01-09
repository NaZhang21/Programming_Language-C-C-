#include<stdio.h>
#include<stdlib.h>
/*读入一个字符，如果该字符不是*,则输出该字符，否则程序停止
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