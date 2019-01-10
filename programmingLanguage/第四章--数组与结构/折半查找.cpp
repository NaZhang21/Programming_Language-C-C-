#include<stdio.h>
#include<stdlib.h>
int main() {
	int data[] = { 1,2,3,4,5,6,7 }, n = 7;
	int low = 0, high = n - 1, mid = (low + high) / 2;
	int x;
	scanf_s("%d", &x);
	while (low <=high) {
		if (data[mid] == x) {
			printf("data[%d]=%d\n", mid, x);
			break;
		}
		else if (data[mid] > x) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
		mid = (low + high) / 2;
	}
	if (low > high) {
		printf("no %d\n", x);
	}
	system("pause");
	return 0;
}