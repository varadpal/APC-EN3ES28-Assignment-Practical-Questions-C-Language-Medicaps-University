//Program to display details of employees using array of structure.

#include <stdio.h>
#include <string.h>

struct Employees{
    char name[50];
    int empId;
    char gender;
};

int main() {
    struct Employees Employe1= {"Varad", 1, 'M'};
    struct Employees Employe2= {"Vatsal", 2, 'M'};
    struct Employees Employe3= {"Varun", 3, 'M'};
    struct Employees Employe4= {"Aryansh", 4, 'M'};

    
    printf("Name: %s\nEmployee Id: %d\nGender: %c\n", Employe1.name, Employe1.empId, Employe1.gender);
    printf("\n\nName: %s\nEmployee Id: %d\nGender: %c\n", Employe2.name, Employe2.empId, Employe2.gender);
    printf("\n\nName: %s\nEmployee Id: %d\nGender: %c\n", Employe3.name, Employe3.empId, Employe3.gender);
    printf("\n\nName: %s\nEmployee Id: %d\nGender: %c\n", Employe4.name, Employe4.empId, Employe4.gender);
}