#include<stdio.h>
#include<stdlib.h>
int main() {
	/*ͨ��д����10���˵ĳɼ����뵽����score�У����ҳ���߷��Լ��ڼ�����*/
	const int n = 10;
	float scores[n], maxScores = 0;
	int i, maxStudent = 0;
	//���ɼ�¼������scores��
	for (i = 0; i < n; i++) {
		scanf_s("%f", &scores[i]);
	}
	//�ҳ���߷ֵ�ͬѧ
	maxScores = scores[0];
	for (i = 0; i < n; i++) {
		if (scores[i] > maxScores) {
			maxScores = scores[i];
			maxStudent = i;
		}
	}
	printf("maxScores=%.2f,maxStudent:%d\n", maxScores, maxStudent);
	system("pause");
	return 0;
}