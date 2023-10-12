#include <stdio.h>

int main() {
	int s = 9;

	for (int i = 0; i < s; i++) {
		// 空心正方形
		for (int j = 0; j < s; j++) {
			if (i == 0 || i == s - 1 || j == 0 || j == s - 1) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}

		printf("\t");

		// 空心圆形
		for (int j = 1; j <= 1; j++) {
			if (i == 0 || (s - i) == 1) { printf("   ***   "); }
			else if (i == 1 || (s - i) == 2) { printf("  *   *  "); }
			else { printf(" *     * "); }
		}

		printf("\t");

		//箭頭
		for (int j = 1; j <= 1; j++) {
			if (i == 2) { printf("   ***   "); }
			else if (i == 3) { printf("  *****  "); }
			else { printf("    *    "); }
		}

		printf("\t");
		
		//空心菱形
		for (int j = 0;j < s;j++) {
			if (i + j == s / 2 || i - j == s / 2 || j - i == s / 2 || i + j == (s / 2) * 3)printf("*");
			else printf(" ");
		}

		printf("\n");
	}
}
