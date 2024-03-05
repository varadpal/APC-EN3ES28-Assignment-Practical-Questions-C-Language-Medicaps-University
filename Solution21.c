// program to display details of student using union.

#include <stdio.h>

union Students{
    char name[50]; 
    int age; 
    int contact; 
}

int main() {
    union Students s1 = {"Varad", 18, 234123};
}