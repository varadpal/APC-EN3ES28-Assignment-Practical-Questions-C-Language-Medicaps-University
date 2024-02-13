// Compare strings using pointer.

#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[]){
    // In order to compare two strings using pointer.
    // We'll be applying the following logic from the string.h inbuilt function known as strcmp():
    // a. the resulting variable should give 1, if both the strings are not equal. 
    // b. the resulting variable should give 0, if both the strings are equal.
    
    // Defining Variables
    char word1[] = "Varad";    
    char word2[] = "Varad";

    // Defining Pointers for Each Variable
    char* ptr1;
    ptr1 = &word1; 
    char* ptr2; 
    ptr2 = &word2; 
    
    // Defining Resultant Variable
    int result = 1; 

    // Using For Loop To Modify The Resultant Variable (here, result) to:
    // Change to 1 -> if both words changes at any index postion (which makes them different from each other)  
    // Change to 0 -> if both words do not change at any index postion (which makes similiar to each other)
    for (int i = 0; i < 5; i++)
    {
        if (ptr1[i] == ptr2[i])
        {
              result = 0;
              continue; 
        }
        else
        {
            result = 1;
            break;
        }
        
    }
        
    // According to the variable 'result' giving the necessary output 
    if (result == 0)
    {
        printf("\nBoth Words Are Same.\n");
    }
    else
    {
        printf("\nBoth Words Are Different.\n");
    }
    
    

    return 0;
}
