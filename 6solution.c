// Program to find sum of elements of array using pointer. 

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){
    int elements[] = {10, 20, 30, 40};
    
    int *ptr; 
    ptr = elements; 

    int result = 0; 
    int eleLenght = sizeof(elements)/ sizeof(elements[0]); // sizeof(elements)= returns the total size in bytes occupied by the entire array
                                                           // sizeof(elements[0]= gives size of single element. 
                                                           // So when we divide elements with elements[0] we'll get the lenght of array.  
    for (int i = 0; i < eleLenght; i++)
    {
        result += *(&ptr[i]); 
    }
    
    printf("\nSum of All Elements = %d\n", result);
     
    return 0;
}
