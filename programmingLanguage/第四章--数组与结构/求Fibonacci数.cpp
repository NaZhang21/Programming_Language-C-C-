#include<stdio.h>
#include<stdlib.h>
int main() {
	//ԭ����һ�����ӣ����������º�ÿ������һֻ���ӣ����N�������ӵ�����
	const int n = 16;
	int f[n],i;
	f[1] = 1, f[2] = 1;
	printf("%4d%4d", f[1], f[2]);
	for (i = 3; i < n; i++) {
		f[i] = f[i - 1] + f[i - 2];
		printf("%4d", f[i]);
	}
	system("pause");
	return 0;

}