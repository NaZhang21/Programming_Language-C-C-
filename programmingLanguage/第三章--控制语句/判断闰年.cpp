#include<stdio.h>
#include<stdlib.h>
int main() {
	int year;
	do
	{
		printf("������һ��1900-2200֮�����ݣ�");
		scanf_s("%d", &year);
	} while (year<1900||year>2200);

	if ((year % 4 == 0 && year % 100 != 0)||year%400==0)
	{
		printf("yes");
	}else{
		printf("no");
	}
	system("pause");
	return 0;
}