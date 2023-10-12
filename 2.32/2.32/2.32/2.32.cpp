#include <stdio.h>

int main() {
	float h, w, BMI;
	printf("請輸入身高(cm):");
	scanf_s("%f", &h);
	printf("請輸入體重(kg):");
	scanf_s("%f", &w);
	BMI = w / ((h / 100)*(h / 100));
	printf("你的BMI:%.2f",BMI);
}