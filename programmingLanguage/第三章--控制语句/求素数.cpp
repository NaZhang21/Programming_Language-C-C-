#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	/*��һ�����ǲ�������*/
	int n, i;
	int result = 1;
	printf("������һ������");
	scanf_s("%d", &n);
	/*for (i = 2; i < n; i++) {
		if (n%i == 0)break;
	}
	if (i < n) printf("%d����������\n", n);
	else printf("%d��������\n",n);
	*/
	//�Ľ�
	for ( i = 2; i <=sqrt((float)n); i++)
	{
		if (n%i == 0)
			result = 0; break;
	}
	if (result = 0) printf("��������\n");
	else printf("��������\n");
	system("pause");
	return 0;
}