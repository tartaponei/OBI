#include <stdio.h>
int n;

int fat(int x) {
	if (x == 1) 
		return 1;
	return x * fat(x - 1);
}

int main() {
	scanf("%d", &n);
	printf("%d", fat(n));

	return 0;
}