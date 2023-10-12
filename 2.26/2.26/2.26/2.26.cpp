#include <stdio.h>

int main() {
	int a, b;
	printf("請輸入被除數:");
	scanf_s("%d", &a);
	printf("請輸入除數:");
	scanf_s("%d", &b);
	if (b != 0) {
		if (a%b == 0) printf("可以被整除");
		else printf("不可以被整除");
	}
	else printf("除數不能為零");
}