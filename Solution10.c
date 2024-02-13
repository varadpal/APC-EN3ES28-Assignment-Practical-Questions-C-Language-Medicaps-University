#include <stdio.h>

int main(int argc, char const *argv[]){
    int range; 
    printf("Enter the Range of Number: ");
    scanf("%d", &range); 

    int arr[range] = {};

    for (int i = 0; i < range; ++i) {
        printf("Enter Value %d: ", i+1);
        scanf("%d", &arr[i]);
    }
     
    int *ptr; 
    ptr = &arr; 

    int lenght = sizeof(arr)/ sizeof(arr[0]); 

    int counter = 0, largestNumber; 

    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            if (*(&ptr[i]) >= *(&ptr[j]))
            {
                //printf("%d %d\n", *(&ptr[i]), *(&ptr[j]));
                counter++;
            }

            if (counter == lenght){
                largestNumber = *(&ptr[i]);
                break;
            }
        }
            counter = 0; 
    }
    
    printf("The Largest Number in the Array is: %d", largestNumber);
    return 0;
}
