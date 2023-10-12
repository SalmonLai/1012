#include <stdio.h>

int main() {
	int t;
	printf("t=");
	scanf_s("%d", &t);
	if (t % 2 == 1) printf("t is odd");
	else printf("t is even");

}