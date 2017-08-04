#include <stdio.h>
#include <string.h>

int main() {
	int N, i, p, numPares = 0;
	
	scanf("%d", &N);
	
	int M[N];
	char L[N];
	
	for (i = 0; i < N; i++) 
	{
		scanf("%d %c", &M[i], &L[i]); // tamanho / lado
		
		for (p = 0; p < i + 1; p++)
		{
			if (M[p] == M[i])
				if (L[p] != L[i])
					numPares++;
		}
	}
	
	printf("%d", numPares);

	return 0;
}