#include <stdio.h>

int main() {
	int x,y,z,max,min;
	printf("�п�Jx,y,z:\n");
	scanf_s("%d %d %d" ,&x ,&y ,&z);
	max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	min = (x < y) ? (x < z ? x : z) : (y < z ? y : z);
	printf("�̤j��:%d\n�̤p��:%d", max, min);
}