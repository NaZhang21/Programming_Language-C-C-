#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	//-----���ַ��������-----
	/*char one[5];
	int i;
	for (i = 0; i < 5; i++) {
		scanf_s("%c", &one[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("%c", one[i]);
	}*/
	//----�ַ����������----
	/*char two[5];
	scanf_s(" %s", two);
	printf("%s", two);
	*/

	//gets������puts����
	/*char three[5];
	gets_s(three);
	puts(three);
	*/

	//�ַ�������
	char str1[30] = "this is a";
	char str2[10] = " string.";
	char str3[10];
	//strlen��ȡ����ĳ���
	printf("strlen:%d\n", strlen(str1));
	//�ַ������ӣ������ӵ�str1��
	strcat_s(str1, str2);
	printf("strcat:%s\n", str1);
	//����
	strcpy_s(str3, str2);
	printf("strcpy:%s\n", str3);
	//�Ƚ�,=����0��>����1��<����-1
	printf("strcmp:%d\n", strcmp("chinese", "china"));
	system("pause");
	return 0;

}