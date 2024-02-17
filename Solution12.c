#include <stdio.h>

int main(int argc, char const *argv[]){
    int mat1[2][2] = {{1,5}, {7,3}};
    int mat2[2][2] = {{12,-1}, {0,9}};
    int mat3[2][2] = {};
    
    int *ptr1, *ptr2; 
    ptr1 = &mat1; 
    ptr2 = &mat2;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            mat3[i][j] = *(&ptr1[i][j]) + *(&ptr2[i][j]);
        }
    }

    //printf("%d", mat3[0][0]);
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 2; l++)
        {
            printf("%d\t", mat3[k][l]);
        }
        printf("\n");
    }
    
    return 0;
}