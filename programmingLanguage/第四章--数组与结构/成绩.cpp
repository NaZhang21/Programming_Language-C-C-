#include<stdio.h>
#include<stdlib.h>
int main() {
	/*通过写程序将10个人的成绩存入到数组score中，并找出最高分以及第几个人*/
	const int n = 10;
	float scores[n], maxScores = 0;
	int i, maxStudent = 0;
	//将成绩录入数组scores中
	for (i = 0; i < n; i++) {
		scanf_s("%f", &scores[i]);
	}
	//找出最高分的同学
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