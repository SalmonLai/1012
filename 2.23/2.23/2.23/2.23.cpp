#include <stdio.h>

int main() {
	int x,y,z,max,min;
	printf("請輸入x,y,z:\n");
	scanf_s("%d %d %d" ,&x ,&y ,&z);
	max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
	printf("最大值:%d\n最小值:%d", max, min);
}