// Online C compiler to run C program online
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
                printf("January = %d\n", i);
                break;
            case 2: 
                printf("February = %d\n", i);
                break;
            case 3: 
                printf("March = %d\n", i);
                break;
            case 4: 
                printf("April = %d\n", i);
                break;
            case 5: 
                printf("May = %d\n", i);
                break;
            case 6: 
                printf("June = %d\n", i);
                break;
            case 7: 
                printf("July = %d\n", i);
                break;
            case 8: 
                printf("August = %d\n", i);
                break;
            case 9: 
                printf("September = %d\n", i);
                break;
            case 10: 
                printf("October = %d\n", i);
                break;
            case 11: 
                printf("November = %d\n", i);
                break;
            case 12: 
                printf("December = %d\n", i);
                break;
        }
    }

    return 0;
}