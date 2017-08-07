#include <stdio.h>

int main() {
	int N, C, i;
	
	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
	{
		int D = 0;
		
		scanf("%d", &C);
		
		while (C != 0)
		{
			C = C / 2;	
			D++;		
		}
		
		printf("%d dias", D);
	}
	
	return 0;
}