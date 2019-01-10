#include<stdio.h>
#include<stdlib.h>
struct person
{
	char name[20];
	unsigned long id;
	float salary;
};
int main() {
	struct person pr1 = { "zhangsan",10080,5300.00 };
	struct person pr2;
	pr2 = pr1;
	printf("%s\t%lu\t%f\n", pr2.name, pr2.id, pr2.salary);
	system("pause");
	return 0;
}