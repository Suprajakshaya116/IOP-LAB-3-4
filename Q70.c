
#include <stdio.h>

int main() {
    int size, i, num, count = 0;

    // Reading the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Reading the elements of the array
    printf("Enter %d elements in the array\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Reading the element to find its occurrence
    printf("Enter the element to find its occurrence: ");
    scanf("%d", &num);

    // Counting the occurrence of the element
    for(i = 0; i < size; i++) {
        if(arr[i] == num) {
            count++;
        }
    }

    // Printing the occurrence of the element
    printf("%d occurred %d times in the array.\n", num, count);

    return 0;
}