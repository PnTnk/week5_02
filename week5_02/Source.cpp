#include<stdio.h>


int main() {
	int n;
	printf("Enter number : ");
	scanf_s("%d", &n);
	int x=1;
	while (x <= n) {
		int a = 1;
		if (x == 1) {
			while (a <= 2 * n - x) {
				printf("*");
				a += 1;
			}
		}
		else {
			while (a < 2 * n) {
				if (a == 2 * n - x +1 || a == x) {
					printf("*");
					a += 1;
				}
				else { printf(" "); }
				a += 1;
			}
		}
		x += 1;
		printf("\n");
	}
	int y=1;
	while (y < n) {
		int b = 1;
		if (y == n - 1) {
			while (b <= 2 * n -1) {
				printf("*");
				b += 1;
			}
		}
		else {
			while (b < 2 * n) {
				if (b == n - y || b == n + y) {
					printf("*");
					b += 1;
				}
				else { 
					printf(" ");
					b += 1;
				}
			}

		}
		y += 1;
		printf("\n");
	}

	return 0;
}