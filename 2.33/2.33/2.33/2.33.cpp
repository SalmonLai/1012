#include <stdio.h>

int main() {
	float a, b, c, d, e, t;
	printf("一整天的總里程數:");
	scanf_s("%f", &a);
	printf("汽油一公升多少錢:");
	scanf_s("%f", &b);
	printf("平均一公升能行駛多少公里:");
	scanf_s("%f", &c);
	printf("一天的停車費:");
	scanf_s("%f", &d);
	printf("一天的通行費(過路費):");
	scanf_s("%f", &e);
	t = ((a / c)*b) + d + e;
	printf("一天下來的花費:%.2f", t);
}