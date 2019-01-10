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
	//通过学生的学号，来分析学生的信息 2015 01 02 03 030分别问年级，学院，专业，班级，编号
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
	printf("学院：%s;专业：%s;年级：%s;班级：%s;编码：%s", s.department, s.major, s.grade, s.cclass, s.number);
	system("pause");
	return 0;
}