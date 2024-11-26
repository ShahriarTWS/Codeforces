#include <stdio.h>

int main() {
    int n, key, found = 0;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search
    scanf("%d", &key);

    // Search for the key in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d\n", i); 
            found = 1;         
            break;          
        }
    }

   
    if (!found) {
        printf("-1\n");
    }

    return 0;
}