// Program for passing structure to a function.

#include <stdio.h>
#include <string.h>
struct Person{
    char name[50];
    int age;
    long contact;
};

void display(struct Person p1){
    printf("Name: %s\nAge: %d\nContact No.: %ld\n", p1.name, p1.age, p1.contact);
}

int main() {
    struct Person p1 = {"Dennis", 18, 5647362134};
    display(p1);
}