#include<stdio.h>
#include<stdlib.h>
int main() {
	int ix = 1, iy = 2, iz;
	float fx = 1.0, fy = 2.0, fz;
	char cx = 'A', cy = 'D', cz;
	iz = ix + iy, fz = fx + fy, cz = cx + cy;
	printf("%d+%d=%d\n", ix, iy, iz);
	printf("%.1f+%.2f=%.2f\n", fx, fy, fz);
	printf("%c+%c=%c\n", cx, cy, cz);
	system("pause");
	return 0;
}





