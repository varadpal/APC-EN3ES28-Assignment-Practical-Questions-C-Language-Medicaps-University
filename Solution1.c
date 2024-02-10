// Program to create, initialize, assign and access a pointer variable. 

#include <stdio.h>

int main(int argc, char const *argv[]){
    int a; 
    printf("Enter Number: ");
    scanf("%d", &a); 

    int *ptra; 
    ptra = &a;

    printf("\nAbout Variable 'a':\n");
    printf("Value Entered: %d\n", a); 
    printf("Adrress of Variable: %x\n", &a); 
     
    printf("\nAbout Pointer of 'a':\n");
    printf("Value Stored in pointer: %x\n", ptra);
    printf("Address of Pointer: %x\n", &ptra);
    printf("Value Pointer is Pointing to: %d\n", *ptra);

    return 0;
}