#include<stdio.h>
#include<stdlib.h>
typedef struct student {
	char grade[5];
	char department[3];
	char major[3];
	char cclass[3];
	char number[3];
}student;
int main() {
	//ͨ��ѧ����ѧ�ţ�������ѧ������Ϣ 2015 01 02 03 030�ֱ����꼶��ѧԺ��רҵ���༶�����
	char Number[14];
	student s;
	int i;
	scanf_s("%s", Number, 14);
	for (i = 0; i < 4; i++)
		s.grade[i] = Number[i];
	s.grade[i] = '\0';
	s.department[0] = Number[i++];
	s.department[1] = Number[i++];
	s.department[2] = '\0';
	s.major[0] = Number[i++];
	s.major[1] = Number[i++];
	s.major[2] = '\0';
	s.cclass[0] = Number[i++];
	s.cclass[1] = Number[i++];
	s.cclass[2] = '\0';
	s.number[0] = Number[i++];
	s.number[1] = Number[i++];
	s.number[2] = Number[i++];
	s.number[3] = '\0';
	printf("ѧԺ��%s;רҵ��%s;�꼶��%s;�༶��%s;���룺%s", s.department, s.major, s.grade, s.cclass, s.number);
	system("pause");
	return 0;
}