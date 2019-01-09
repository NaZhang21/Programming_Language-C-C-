#include<stdio.h>
#include<stdlib.h>
/*华氏温度和摄氏温度的公式转换
公式为：C=5/9*(F-32)
*/
int main() {
	int c;
	float f;
	printf("输入摄氏温度：");
	scanf_s("%d", &c);
	f = (float)9*c/5+32;//注意这里强制转换
	printf("输出的对应华氏温度为：%.2f\n", f);
	system("pause");
	return 0;

}