// Program to display details of students (i.e Name, Roll No., Marks) using structure.

#include <stdio.h>
#include <string.h>

struct Students{
    char name[50]; 
    int rollNo; 
    int marks;
};

int main() {
    struct Students Student1= {"Varad", 1, 70};
    struct Students Student2= {"Vatsal", 2, 30};
    struct Students Student3= {"Varun", 3, 35};
    struct Students Student4= {"Aryansh", 4, 99};

    
    printf("Name: %s\nRoll No.: %d\nMarks: %d\n", Student1.name, Student1.rollNo, Student1.marks);
    printf("\n\nName: %s\nRoll No.: %d\nMarks: %d\n", Student2.name, Student2.rollNo, Student2.marks);
    printf("\n\nName: %s\nRoll No.: %d\nMarks: %d\n", Student3.name, Student3.rollNo, Student3.marks);
    printf("\n\nName: %s\nRoll No.: %d\nMarks: %d\n", Student4.name, Student4.rollNo, Student4.marks);
}