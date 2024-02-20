// Program to create a pointer array store elements in it and display.
#include <stdio.h>

int main() {
    int range; 
    printf("Enter Range of Array: "); scanf("%d", &range);
    
    int arr[range] = {}; 

    int *ptr;
    ptr = arr;

    // For Taking Input
    for(int i =0; i < range; i++) {
        printf("Enter Value %d: ", i+1);
        scanf("%d", *(ptr+i)); // *ptr[i]
    }

    // For Printing Output
    for(int j = 0; j < range; j++){
        printf("%d", *(ptr +j));
    }
}