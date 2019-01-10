#include<stdio.h>
#include<stdlib.h>
/*
录入n个学生信息，包括姓名、学号、语文成绩、数学成绩、英语成绩；
并按照语文成绩降序排序
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
	第一步：首先将学生的信息录入进系统
	*/
	int i,j;
    student Student[n],temp;
	for (i = 0; i < n; ++i) {
		scanf_s("%s%d%f%f%f", Student[i].name, m - 1, &Student[i].id, &Student[i].chinese, &Student[i].math, &Student[i].english);

	}

	/*
	第二步：根据语文成绩进行降序排序
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
	第三步：输出信息
	*/
	for (i = 0; i < n; ++i) {
		printf("%s\t%d\t%f\t%f\t%f\n", Student[i].name, Student[i].id, Student[i].chinese, Student[i].math, Student[i].english);

	}
	system("pause");
	return 0;
}