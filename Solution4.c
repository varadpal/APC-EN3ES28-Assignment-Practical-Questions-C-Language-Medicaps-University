// Program to print a string using pointer. 

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    char name[] = "Varad"; 

    char *ptrn;
    ptrn = &name; 

    printf("%s", ptrn);
    return 0;
}