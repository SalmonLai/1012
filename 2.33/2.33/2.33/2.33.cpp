#include <stdio.h>

int main() {
	float a, b, c, d, e, t;
	printf("�@��Ѫ��`���{��:");
	scanf_s("%f", &a);
	printf("�T�o�@���ɦh�ֿ�:");
	scanf_s("%f", &b);
	printf("�����@���ɯ��p�h�֤���:");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O:");
	scanf_s("%f", &d);
	printf("�@�Ѫ��q��O(�L���O):");
	scanf_s("%f", &e);
	t = ((a / c)*b) + d + e;
	printf("�@�ѤU�Ӫ���O:%.2f", t);
}