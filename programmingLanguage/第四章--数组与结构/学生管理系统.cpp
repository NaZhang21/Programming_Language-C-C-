#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include<math.h>
struct Node {
	char name[25];
	int f;
	char str[20];
	double h;
	int l, r;
}P[100];
int main()
{
	int n;
	scanf_s("%d", &n);
	int C_max = 0, C_min = 100, C_sum = 0;
	int Ca_max = 0, Ca_min = 100, Ca_sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%s%d%s%lf%d%d", P[i].name,24, &P[i].f, P[i].str,19, &P[i].h, &P[i].l, &P[i].r);
		if (P[i].l > C_max) C_max = P[i].l;
		if (P[i].l < C_min) C_min = P[i].l;
		if (P[i].r > Ca_max) Ca_max = P[i].r;
		if (P[i].r < Ca_min) Ca_min = P[i].r;
		C_sum += P[i].l;
		Ca_sum += P[i].r;
	}
	float C_average;
	C_average = (float)C_sum / n;
	int cc = round(C_average);
	printf("C_average:%d\n", cc);
	printf("C_max:%d\n", C_max);
	for (int i = 0; i < n; i++)
	{
		if (P[i].l == C_max)
		{
			printf("%s %d %s %.2f %d %d\n", P[i].name, P[i].f, P[i].str, P[i].h, P[i].l, P[i].r);
		}
	}
	float Calculus_average;
	Calculus_average = (float)Ca_sum / n;
	int ca = round(Calculus_average);
	printf("C_min:%d\n", C_min);
	printf("Calculus_average:%d\n", ca);
	printf("Calculus_max:%d\n", Ca_max);
	for (int i = 0; i < n; i++)
	{
		if (P[i].r == Ca_max)
		{
			printf("%s %d %s %.2f %d %d\n", P[i].name, P[i].f, P[i].str, P[i].h, P[i].l, P[i].r);
		}
	}
	printf("Calculus_min:%d\n", Ca_min);
	system("pause");
	return 0;
}
