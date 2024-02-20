// Program to demonstrate function pointers.
#include <stdio.h>

void func1(int *a, int *b){
    *a += *b;
    printf("Sum of Both Numbers = %d", *a);
}

int main() {
    int num1 = 12, num2 = 13;

    func1(&num1, &num2)
}