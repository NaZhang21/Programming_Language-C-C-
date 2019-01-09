#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	/*求一个数是不是素数*/
	int n, i;
	int result = 1;
	printf("请输入一个数：");
	scanf_s("%d", &n);
	/*for (i = 2; i < n; i++) {
		if (n%i == 0)break;
	}
	if (i < n) printf("%d不是素数！\n", n);
	else printf("%d是素数！\n",n);
	*/
	//改进
	for ( i = 2; i <=sqrt((float)n); i++)
	{
		if (n%i == 0)
			result = 0; break;
	}
	if (result = 0) printf("非素数！\n");
	else printf("是素数！\n");
	system("pause");
	return 0;
}