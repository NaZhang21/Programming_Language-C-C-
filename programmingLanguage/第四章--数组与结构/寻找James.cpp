#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	const int n = 20, m = 5;
	char name[][n] = { "kate.wate","James.Tan","Bull.Ben","Jimes.zhang","James.Xi" };
	char James[] = "James";
	int i,j, len = strlen(James);
	for (i = 0; i < m; i++) {
		for (j = 0; j < len; j++) {
			if (name[i][j] != James[j])break;
			
		}
		if(j==len)
			printf("%s°üº¬James\n", name[i]);
	}
	system("pause");
	return 0;

}