// Find sum of all matrix elements using pointer.

#include <stdio.h>

int main(int argc, char const *argv[]){
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; //45
    int result = 0; 

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            result += *(*(mat + i) + j);    
        }
    }
    
    printf("Sum of All Elements = %d", result);
    return 0;
}
