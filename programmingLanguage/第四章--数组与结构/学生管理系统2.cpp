#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
¼��n��ѧ����Ϣ������������ѧ�š����ĳɼ�����ѧ�ɼ���Ӣ��ɼ���
���������ĳɼ���������
*/
//const int n = 3, m = 20;
typedef struct student
{
	char name[20];
	int sex;
	char bir[20];
	float high;
	float clanguage;
	float calculus;
}student;
int main() {
	/*
	��һ�������Ƚ�ѧ������Ϣ¼���ϵͳ
	*/
	student Student[100];

	int i, j;
	int n;
	scanf_s("%d", &n);

	for (i = 0; i < n; ++i) {
		scanf_s("%s%d%s%f%f%f", Student[i].name, 19, &Student[i].sex, Student[i].bir, 19, &Student[i].high, &Student[i].clanguage, &Student[i].calculus);

	}

	/*
	�ڶ�����Ѱ�Ҹ��ǳɼ�����ƽ���֡���߷֡���ͷ֡��Լ���߳ɼ���ѧ����Ϣ
	*/
	int C_max = 0, C_min = 100, C_sum = 0;
	int Ca_max = 0, Ca_min = 100, Ca_sum = 0;
	float C_avage, Ca_avage;
	for (i = 0; i < n; i++) {
		if (Student[i].clanguage > C_max)C_max = Student[i].clanguage;
		if (Student[i].clanguage < C_min)C_min = Student[i].clanguage;
		if (Student[i].calculus > Ca_max)Ca_max = Student[i].calculus;
		if (Student[i].calculus < Ca_min)Ca_min = Student[i].calculus;
		C_sum += Student[i].clanguage;
		Ca_sum += Student[i].calculus;
	}

	C_avage = (float)C_sum / n;
	int cl;
	cl = round(C_avage);
	printf("C_avage:%d\n", cl);
	printf("C_max:%d\n", C_max);
	for (i = 0; i < n; i++) {
		if (Student[i].clanguage == C_max) {
			printf("%s %d %s %f %f %f\n", Student[i].name, Student[i].sex, Student[i].bir, Student[i].high, Student[i].clanguage, Student[i].calculus);
		}
	}
	printf("C_min:%d\n", C_min);


	Ca_avage = (float)Ca_sum / n;
	int ca;
	ca = round(Ca_avage);
	printf("Ca_avage:%d\n", ca);
	printf("Ca_max:%d\n", Ca_max);
	for (i = 0; i < n; i++) {
		if (Student[i].calculus == Ca_max) {
			printf("%s %d %s %f %f %f\n", Student[i].name, Student[i].sex, Student[i].bir, Student[i].high, Student[i].clanguage, Student[i].calculus);
		}
	}
	printf("Ca_min:%d\n", Ca_min);
	system("pause");
	return 0;
}