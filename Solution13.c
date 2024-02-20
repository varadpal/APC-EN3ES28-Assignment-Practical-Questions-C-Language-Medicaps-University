// Program to create a pointer array store elements in it and display.
#include <stdio.h>

int main() {
    // int range; 
    // printf("Enter Range of Array: "); 
    // scanf("%d", &range);
    
    int arr[5] = {}; 

    int *ptr;
    ptr = arr;

    // For Taking Input
    for(int i = 0; i < 5; i++) {
        printf("Enter Value %d: ", i+1);
        scanf("%d", &(*(ptr+i)));
    }

    // For Printing Output
    printf("The Array Entered:\n");
    for(int j = 0; j < 5; j++){
        printf("%d\n", *(ptr+j));
    }
}
