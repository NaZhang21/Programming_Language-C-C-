#include<stdio.h>
#include<stdlib.h>
int main() {
	char x = 111;// ������λ0110 1111   
	char y;
	//���ڶ�λ����
	x = x & ~2;
	//������λ����Ϊ1
	x = x | 8;
	//������λȡ��
	x = x ^ 32;
	printf("���ʮ����:%d\n", x);
	printf("����˽���:%o\n", x);
	printf("���16����:%0x\n", x);
	printf("�������:");
	//��ʮ����ת��Ϊ������
	for (int i = 7; i >= 0; i--) {
		y = (x >> i) & 1;
		printf("%d", y);
	}
	printf("\n");
	system("pause");
	return 0;
}