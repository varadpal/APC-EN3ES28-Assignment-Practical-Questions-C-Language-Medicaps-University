// Program for returning structure from a function.

#include <stdio.h>
#include <string.h>

struct Person{
    char name[50];
    int age;
    long contact;
}s1;

void Design(){
    strcpy(s1.name, "Dennis");
    // s1.name[50] = "Dennis";
    s1.age = 18;
    s1.contact = 5647362134;
}

int main() {
    // struct Person s1; 
    Design(); 
    printf("Name: %s\nAge: %d\nContact No.: %ld\n", s1.name, s1.age, s1.contact);
}