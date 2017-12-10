#include <stdio.h>
int n, y;

int ref1 (int x) {
	if (x == 0)
		return 0;

	printf("%d", x);
	return (ref1(x-1));
}

int ref2 (int x) {
	if (x == y-(y-1))
		return y;

	printf("%d", y-(x-1));
	return (ref2(x-1));
}

int main() {
	scanf("%d", &n);
	y = n;

	printf("%d", ref1(n));
	printf("%d", ref2(n));

	return 0;
}