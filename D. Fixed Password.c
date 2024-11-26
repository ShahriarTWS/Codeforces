#include <stdio.h>
 
int main()
{
    int pass, Correct = 1999;
 
    for (;;)
    {
        scanf("%d", &pass);
        if (pass != Correct)
        {
            printf("Wrong\n");
        }
        else
        {
 
            printf("Correct\n");
            break;
        }
    }
 
    return 0;
}