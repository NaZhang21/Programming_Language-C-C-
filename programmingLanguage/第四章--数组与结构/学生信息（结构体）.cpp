#include<stdio.h>
#include<stdlib.h>
/*
¼��n��ѧ����Ϣ������������ѧ�š����ĳɼ�����ѧ�ɼ���Ӣ��ɼ���
���������ĳɼ���������
*/
const int n = 3,m=20;
typedef struct student
{
	char name[m];
	int id;
	float chinese;
	float math;
	float english;
}student;
int main() {
	/*
	��һ�������Ƚ�ѧ������Ϣ¼���ϵͳ
	*/
	int i,j;
    student Student[n],temp;
	for (i = 0; i < n; ++i) {
		scanf_s("%s%d%f%f%f", Student[i].name, m - 1, &Student[i].id, &Student[i].chinese, &Student[i].math, &Student[i].english);

	}

	/*
	�ڶ������������ĳɼ����н�������
	*/

	int max;
	for (i = 0; i < n; i++) {
		//max = i;
		for (j = i + 1; j < n; j++) {
			if (Student[j].chinese > Student[i].chinese) {
				//max = j;
				temp = Student[i];
				Student[i] = Student[j];
				Student[j] = temp;
			}
		}
	}
	/*
	�������������Ϣ
	*/
	for (i = 0; i < n; ++i) {
		printf("%s\t%d\t%f\t%f\t%f\n", Student[i].name, Student[i].id, Student[i].chinese, Student[i].math, Student[i].english);

	}
	system("pause");
	return 0;
}