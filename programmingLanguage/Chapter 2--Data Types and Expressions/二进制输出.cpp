#include<stdio.h>
#include<stdlib.h>
int main() {
	unsigned char i, j;
	printf("����һ��0-255��ʮ��������:\n");
	scanf_s("%d", &i);
	printf("ʮ���ƣ�%d\n", i);
	printf("ʮ�����ƣ�%x\n", i);
	printf("�˽��ƣ�%04o\n", i);
	j = (i >> 7)+48;
	printf("%1c",j);
	j = ((i >> 6)&0x01)+48;
	printf("%1c", j);
	j = ((i >> 5) & 0x01) + 48;
	printf("%1c", j);
	j = ((i >> 4) & 0x01) + 48;
	printf("%1c", j);
	j = ((i >> 3) & 0x01) + 48;
	printf("%1c", j);
	j = ((i >> 2) & 0x01) + 48;
	printf("%1c", j);
	j = ((i >> 1) & 0x01) + 48;
	printf("%1c", j);
	j = (i & 0x01) + 48;
	printf("%1c", j);
	system("pause");
	return 0;
}