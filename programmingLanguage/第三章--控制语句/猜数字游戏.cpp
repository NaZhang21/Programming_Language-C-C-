#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	/*��һ��1-100�����֣��¶��˷���right���´��˷���wrong����ʾ�´��˻��ǲ�С��
	*/
	printf("------������Ϸ------\n");
	int magic;//������Լ����һ����  rand()�������[0,b-1]֮������rand()%b,1-100֮�������ʾΪrand()%100+1
	int guess;//�²��ֵ
	int count;//��¼�²����
	srand(time(NULL));//������rand()����ÿ���������������һ��
	magic = rand() % 100 + 1;
	count = 0;
	do
	{
		printf("������һ���²�����֣�");
		scanf_s("%d", &guess);
		count++;
		if (guess > magic)
			printf("wrong!�´��ˣ�\n");
		else if (guess < magic)
			printf("wrong!��С�ˣ�\n");
		else
			printf("right!\n");
	} while (guess != magic);
	printf("�²����Ϊ��%d\n", count);

	/*printf("������һ���²�����֣�");
	scanf_s("%d", &guess);
	while (guess != magic) {
		count++;
		if (guess > magic) {
			printf("wrong!�´��ˣ�\n");
			printf("������һ���²�����֣�");
			scanf_s("%d", &guess);
		}
		else if (guess < magic) {
			printf("wrong!��С�ˣ�\n");
			printf("������һ���²�����֣�");
			scanf_s("%d", &guess);
		}
	}
	printf("right\n");
	printf("�²����Ϊ��%d\n", count);
	*/



	system("pause");
	return 0;

}