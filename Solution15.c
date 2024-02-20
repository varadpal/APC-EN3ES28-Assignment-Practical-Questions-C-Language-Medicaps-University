// Program to perform addition, substraction, division and multiplication using array of function pointers.
#include <stdio.h>

void Sum(int a, int b){
    printf("Addition is = %d\n", a+b); 
}
void Subtract(int a, int b){
     printf("Subtraction is = %d\n", a-b);
}
void Div(int a, int b){
    printf("Division is = %d\n", a/b); 
}
void Mul(int a, int b){
    printf("Multiplication is = %d\n", a*b); 
}

int main() {
    int num1, num2;
    
    // For Taking Values of num1 and num2 from user
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    
    // Declaring Function Pointer Array for the Functions Made Above
    void (*fun_ptr_arr[])(int, int) = {Sum, Subtract, Div, Mul};
    
    // Asking User To Choose Which function (operation) they want to trigger
    int choice;
    printf("Choose from Following:\n"
    "1. For Addition\n"
    "2. For Subtraction\n"
    "3. For Division\n"
    "4. For Multiplication\n"
    ); 
    scanf("%d", &choice);
    
    // Calling the Appropriate Function According to the Value of Variable 'choice'
    // that which the user will enter.
    (*fun_ptr_arr[choice-1])(num1, num2); // Here, we took choice - 1 because, when choice is say
                                          // 1 then we want to trigger the index position 0 of 
                                          // function Pointer Array.

    return 0;
}
