#include<stdio.h>
#include<stdlib.h>
int main() {
	//原本有一对兔子，出生三个月后每个月生一只兔子，求第N个月兔子的总数
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