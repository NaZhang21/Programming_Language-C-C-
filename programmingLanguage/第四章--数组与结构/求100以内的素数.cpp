#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	//��100���ڵ���������2��ʼ��2����������2�������Ǻ�����Ȼ���1�����Ǻ�������������
	//�����Ǻ���Ϊ1������Ϊ0��
	const int n = 100;
	int isPrim[n + 1] = { 0 }; //������еĶ�������
	int i,j;
	for (i = 2; i < sqrt((float)n); i++) {
		if (isPrim[i] == 0) {
			for (j = 2 * i; j < n; j += i) {
				isPrim[j] = 1; //��������ǳ���
			}
		}
	}
	//����������
	for (i = 2; i < n; i++) {
		if (isPrim[i] == 0) {
			printf("%5d", i);
		}
	}
	system("pause");
	return 0;
}