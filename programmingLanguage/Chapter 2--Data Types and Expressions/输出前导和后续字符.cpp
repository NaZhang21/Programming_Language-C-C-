#include<stdio.h>
#include<stdlib.h>
int main() {
	char c;
	int c1, c2;
	c = getchar();//ÊäÈë×Ö·ûc
	c1 = c - 1, c2 = c + 1;
	printf("%c %c %c\n", c1, c, c2);
	printf("%d %d %d\n", c1, c, c2);
	system("pause");
	return 0;
}