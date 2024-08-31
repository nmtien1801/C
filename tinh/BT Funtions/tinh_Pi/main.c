#include <stdio.h>

int main() {
	double c;
	printf("Nhap do chinh xac c: ");
	scanf("%lf", &c);

	int k = 0;
	double kq = 0;
	int a = -1;
	double tg = 1.0 / (2 * k + 1);
	while(tg >= c) {
		tg = 1.0 / (2 * k + 1);
		kq += -1 * a * tg;
		a *= -1;
		k++;
	}
	double PI = 4 * kq;
	printf("PI = %0.8lf", PI);

	return 0;
}
