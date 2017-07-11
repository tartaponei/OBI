#include <stdio.h>
#include <string.h>

int main() {
    int N, d, x, qtdD = 0, qtdX = 0, i;
    
    int vitoria[5][5] = {
        {0, 0, 0, 3, 4},
        {0, 0, 1, 1, 4},
        {0, 1, 0, 2, 2},
        {3, 1, 2, 0, 3},
        {4, 4, 2, 3, 0}
    };
    
    scanf("%d", &N);
    
    for (i = 0; i < N; i++)
    {
        scanf("%d %d", &d, &x);
        
        if (vitoria[d][x] == d)
           qtdD++;
        else
            qtdX++;
    }
    
    printf("%s", ((qtdD > qtdX)?("dario"):("xerxes")));
    
    return 0;
}