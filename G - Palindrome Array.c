#include <stdio.h>

int main()
{
    int n, ck = 1; // Assume the array is a palindrome
    scanf("%d", &n);

    int arr[n];

    // Read elements of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Check if the array is a palindrome by comparing elements from both ends
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            ck = 0; // Set ck to 0 if any mismatch is found
            break;
        }
    }

    // Print the result
    if (ck == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}