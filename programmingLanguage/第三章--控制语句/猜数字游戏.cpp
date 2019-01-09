#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	/*想一个1-100的数字，猜对了返回right，猜错了返回wrong并提示猜大了还是猜小了
	*/
	printf("------猜数游戏------\n");
	int magic;//计算机自己想的一个数  rand()随机数，[0,b-1]之间则是rand()%b,1-100之间的数表示为rand()%100+1
	int guess;//猜测的值
	int count;//记录猜测次数
	srand(time(NULL));//可以让rand()函数每次随机产生的数不一样
	magic = rand() % 100 + 1;
	count = 0;
	do
	{
		printf("请输入一个猜测的数字：");
		scanf_s("%d", &guess);
		count++;
		if (guess > magic)
			printf("wrong!猜大了！\n");
		else if (guess < magic)
			printf("wrong!猜小了！\n");
		else
			printf("right!\n");
	} while (guess != magic);
	printf("猜测次数为：%d\n", count);

	/*printf("请输入一个猜测的数字：");
	scanf_s("%d", &guess);
	while (guess != magic) {
		count++;
		if (guess > magic) {
			printf("wrong!猜大了！\n");
			printf("请输入一个猜测的数字：");
			scanf_s("%d", &guess);
		}
		else if (guess < magic) {
			printf("wrong!猜小了！\n");
			printf("请输入一个猜测的数字：");
			scanf_s("%d", &guess);
		}
	}
	printf("right\n");
	printf("猜测次数为：%d\n", count);
	*/



	system("pause");
	return 0;

}