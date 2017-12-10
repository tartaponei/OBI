#include <stdio.h>
int i = 1;
unsigned int n;

int main() {
	while (i > 0)
	{
		n = n + 1;
		i++;
	}

	printf("%d", n);

	return 0;
}