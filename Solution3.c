// Program to change the value of constant integer using pointers.
#include <stdio.h>

int main(int argc, char const *argv[]){
    const int a = 20; 
    int *ptra; 
    ptra = &a; 

    printf("Before changing: %d\n", a);
    *ptra = 60;
    printf("After changing: %d\n", a);
    printf("\nWa Wa Wee Wa...\nVery Nice!!!"); 
    return 0;
}