// Program to swap two numbers using pointers. 

#include <stdio.h>

int main(int argc, char const *argv[]){
    int num1, num2; 

    printf("Enter Number 1: "); 
    scanf("%d", &num1);

    printf("Enter Number 2: "); 
    scanf("%d", &num2);


    printf("\nBefore Swapping:\n");
    printf("Number 1: %d\nNumber 2: %d", num1, num2);

    int *ptr1, *ptr2; 
    ptr1 = &num1;
    ptr2 = &num2;

    *ptr1 += *ptr2; 
    *ptr2 = *ptr1 - *ptr2; 
    *ptr1 = *ptr1 - *ptr2; 

    printf("\n\nAfter Swapping:\n");
    printf("Number 1: %d\nNumber 2: %d", num1, num2);


    return 0;
}