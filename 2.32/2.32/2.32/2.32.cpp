#include <stdio.h>

int main() {
	float h, w, BMI;
	printf("�п�J����(cm):");
	scanf_s("%f", &h);
	printf("�п�J�魫(kg):");
	scanf_s("%f", &w);
	BMI = w / ((h / 100)*(h / 100));
	printf("�A��BMI:%.2f",BMI);
}