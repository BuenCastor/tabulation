#include "stdafx.h"
int main()
{
	double a = 1, b = 3, c = -4, d = -1, hx = 0.12, hy = 0.15;
	printf("%c\\%c", 'Y', 'X');
	for (double x = a; x <= b; x += hx) {
		printf("\t%8.2f\n", x);
	}
	printf("\n");
	for (double y = c; y <= d; y += hy) {
		printf("%.2f", y);
		for (double x = a; x <= b; x += hx) {
			double z = sqrt(x*fabs(y)) - sqrt(x - y);
			printf("\t%8.2f\n", z);
		}
		printf("\n");
	}
	printf("\n");
	getchar();
	return 0;
}

