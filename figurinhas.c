#include <stdio.h>

int main() 
{
	int N, F1, F2, i;

	scanf("%d", &N);

	for (i = 0; i < N; i++) 
	{
		scanf("%d", &F1); // Ricardo
		scanf("%d", &F2); // Vicente

		if (F1 > F2)
		{
			if (F1 % F2 == 0)
				printf("%d", F2);
			else
				printf ("%d", F1 % F2);
		}
		else if (F2 > F1)
		{
			if (F2 % F1 == 0)
				printf("%d", F1);
			else
				printf ("%d", F2 % F1);
		}	
	}

	return 0;
}