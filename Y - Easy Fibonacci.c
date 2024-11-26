#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int a = 0, b = 1, next;

    
    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            printf("%d ", a); 
        }
        else if (i == 2)
        {
            printf("%d ", b); 
        }
        else
        {
            next = a + b; 
            printf("%d ", next);
            a = b;       
            b = next;    
        }
    }
    printf("\n");

    return 0;
}