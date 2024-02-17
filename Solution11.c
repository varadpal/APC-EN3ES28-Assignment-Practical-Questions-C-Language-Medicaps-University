#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int range;
    printf("Enter the Range of Number: ");
    scanf("%d", &range);

    int arr[range];

    for(int k = 0; k < range; ++k) {
        printf("Enter Value %d: ", k + 1);
        scanf("%d", &arr[k]);
    }

    int *ptr;
    ptr = &arr;

    int lenght = sizeof(arr) / sizeof(arr[0]);

    int counter = 0, smallestNumber;

    for (int i = 0; i < lenght; i++)
    {
        for (int j = 0; j < lenght; j++)
        {
            if (*(&ptr[i]) >= *(&ptr[j]))
            {
                // printf("%d %d\n", *(&ptr[i]), *(&ptr[j]));
                counter++;
            }

        }
            if (counter == 1)
            {
                smallestNumber = *(&ptr[i]);
                break;
            }
        counter = 0;
    }

    printf("The Smallest Number in the Array is: %d\n\n", smallestNumber);

    return 0;
}
