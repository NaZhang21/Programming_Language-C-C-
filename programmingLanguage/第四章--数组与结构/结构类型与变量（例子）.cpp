#include<stdio.h>
#include<stdlib.h>
//����ṹ���ͣ�ʵ�ʾ����Զ�����������
struct weather {
	float temp;
	int wind;
};
int main() {
	struct weather today;
	today.temp = 35.5;
	today.wind = 4;
	printf("temp=%.2f\n", today.temp);
	printf("wind=%d\n", today.wind);
	system("pause");
	return 0;
}