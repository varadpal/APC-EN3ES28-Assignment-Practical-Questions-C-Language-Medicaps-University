// Program to print month of year.

#include <stdio.h>

enum Months{
    jan =1, feb, march, april, may, june, july, august, september, october, november, december
};

int main() {
    // Write C code here
    // enum Months Value = jan; 
    printf("Months in a Year:\n\n");
    for(int i = jan; i <= december; i++){
        switch(i){
            case 1: 
                printf("%d. January\n", i);
                break;
            case 2: 
                printf("%d. February\n", i);
                break;
            case 3: 
                printf("%d. March\n", i);
                break;
            case 4: 
                printf("%d. April\n", i);
                break;
            case 5: 
                printf("%d. May\n", i);
                break;
            case 6: 
                printf("%d. June\n", i);
                break;
            case 7: 
                printf("%d. July\n", i);
                break;
            case 8: 
                printf("%d. August\n", i);
                break;
            case 9: 
                printf("%d. September\n", i);
                break;
            case 10: 
                printf("%d. October\n", i);
                break;
            case 11: 
                printf("%d. November\n", i);
                break;
            case 12: 
                printf("%d. December\n", i);
                break;
        }
    }

    return 0;
}
