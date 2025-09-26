#include <stdio.h>

int main() {
    int n, i;
    int arr[100];   // fixed size array (enough for most cases)
    int *p;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    p = arr;   // pointer points to the first element of array

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);   // store values using pointer
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(p + i));  // print values using pointer
    }
    printf("\n");

    return 0;
}
