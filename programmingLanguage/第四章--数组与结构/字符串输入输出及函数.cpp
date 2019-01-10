#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	//-----单字符输入输出-----
	/*char one[5];
	int i;
	for (i = 0; i < 5; i++) {
		scanf_s("%c", &one[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%c", one[i]);
	}*/
	//----字符串输入输出----
	/*char two[5];
	scanf_s(" %s", two);
	printf("%s", two);
	*/

	//gets函数和puts函数
	/*char three[5];
	gets_s(three);
	puts(three);
	*/

	//字符串函数
	char str1[30] = "this is a";
	char str2[10] = " string.";
	char str3[10];
	//strlen获取数组的长度
	printf("strlen:%d\n", strlen(str1));
	//字符串连接，都连接到str1上
	strcat_s(str1, str2);
	printf("strcat:%s\n", str1);
	//复制
	strcpy_s(str3, str2);
	printf("strcpy:%s\n", str3);
	//比较,=返回0，>返回1，<返回-1
	printf("strcmp:%d\n", strcmp("chinese", "china"));
	system("pause");
	return 0;

}