// Program to swap 2 numbers using pointers and functions.

#include <stdio.h> 

void Swap(int *a, int *b){
    *a += *b; 
    *b = *a - *b; 
    *a -= *b; 
}

int main() {
    // Defining Varibles
    int num1, num2;

    // Taking Valkues from User
    printf("Enter Number 1: "); 
    scanf("%d", &num1);

    printf("Enter Number 1: "); 
    scanf("%d", &num2);
    // Results Before Swapping    
    printf("Before Swapping\nnum1 : %d\nnum2 : %d\n", num1, num2); 
    // Using Function Swap and giving the position of the two variables
    Swap(&num1, &num2);
    // Results After Swapping    
    printf("After Swapping\nnum1 : %d\nnum2 : %d\n", num1, num2); 
}
