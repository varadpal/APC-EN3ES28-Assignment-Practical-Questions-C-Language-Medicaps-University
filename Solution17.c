//Program to display details of employees using array of structure.

#include <stdio.h>
#include <string.h>

struct Employees{
    char name[50];
    int empId;
    char gender;
};

int main() {
    struct Employees Employee1= {"Varad", 1, 'M'};
    struct Employees Employee2= {"Vatsal", 2, 'M'};
    struct Employees Employee3= {"Varun", 3, 'M'};
    struct Employees Employee4= {"Aryansh", 4, 'M'};

    
    printf("Name: %s\nEmployee Id: %d\nGender: %c\n", Employee1.name, Employee1.empId, Employee1.gender);
    printf("\n\nName: %s\nEmployee Id: %d\nGender: %c\n", Employee2.name, Employee2.empId, Employee2.gender);
    printf("\n\nName: %s\nEmployee Id: %d\nGender: %c\n", Employee3.name, Employee3.empId, Employee3.gender);
    printf("\n\nName: %s\nEmployee Id: %d\nGender: %c\n", Employee4.name, Employee4.empId, Employee4.gender);
}
