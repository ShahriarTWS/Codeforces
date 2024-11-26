//Write a C program to find reverse of an array.
#include <stdio.h>
int main()
{


    int n; // for index size of array
    scanf("%d", &n);
    // declare array variable
    int arr[n];

    // using for loop for taking input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // using for loop to find reverse of an array.
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}