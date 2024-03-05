// Program to access member of structure using pointer.

#include <stdio.h>

struct Structure{
    int num1, num2, num3; 
};

int main() {
    struct Structure s1 = {1,2,3}; 
    struct Structure *ptr;
    ptr = &s1;

    printf("Members of Structure: %d, %d, %d",ptr->num1, ptr->num2, ptr->num3);
}