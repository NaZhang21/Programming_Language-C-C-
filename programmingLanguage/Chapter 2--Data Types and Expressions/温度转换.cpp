#include<stdio.h>
#include<stdlib.h>
/*�����¶Ⱥ������¶ȵĹ�ʽת��
��ʽΪ��C=5/9*(F-32)
*/
int main() {
	int c;
	float f;
	printf("���������¶ȣ�");
	scanf_s("%d", &c);
	f = (float)9*c/5+32;//ע������ǿ��ת��
	printf("����Ķ�Ӧ�����¶�Ϊ��%.2f\n", f);
	system("pause");
	return 0;

}