#include <stdio.h>

int main() {
	int a, b;
	printf("�п�J�Q����:");
	scanf_s("%d", &a);
	printf("�п�J����:");
	scanf_s("%d", &b);
	if (b != 0) {
		if (a%b == 0) printf("�i�H�Q�㰣");
		else printf("���i�H�Q�㰣");
	}
	else printf("���Ƥ��ର�s");
}