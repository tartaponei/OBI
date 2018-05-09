#include <stdio.h>

int main()
{
    int A, proxAno;
    
    scanf("%d", &A); //ano atual
    
    proxAno = 1986 + 76;
   
    if (A > proxAno)
    {
        while (proxAno < A)
        {
            proxAno = proxAno + 76;
            
            if (proxAno > A)
                printf("%d", proxAno);
        }
    }
    else if (A == 2062)
        printf("%d", A + 76);
    else
        printf("%d", proxAno);

    return 0;
}