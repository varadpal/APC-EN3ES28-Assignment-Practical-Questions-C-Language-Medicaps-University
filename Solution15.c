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
    int num1 = 3, num2 = 2; 

    void (*fun_ptr_arr[])(int, int) = {Sum, Subtract, Div, Mul};
    
    int choice;
    printf("Choose from Following:\n"
    "1. For Addition\n"
    "2. For Subtraction\n"
    "3. For Division\n"
    "4. For Multiplication\n"
    ); 
    scanf("%d", &choice);
    (*fun_ptr_arr[choice-1])(num1, num2);

    return 0;
}