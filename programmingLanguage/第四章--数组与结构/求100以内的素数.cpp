#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	//求100以内的素数，从2开始，2是素数，而2倍数都是合数；然后加1，不是合数就是素数；
	//这里标记合数为1，素数为0；
	const int n = 100;
	int isPrim[n + 1] = { 0 }; //标记所有的都是素数
	int i,j;
	for (i = 2; i < sqrt((float)n); i++) {
		if (isPrim[i] == 0) {
			for (j = 2 * i; j < n; j += i) {
				isPrim[j] = 1; //将合数标记出来
			}
		}
	}
	//最后输出素数
	for (i = 2; i < n; i++) {
		if (isPrim[i] == 0) {
			printf("%5d", i);
		}
	}
	system("pause");
	return 0;
}