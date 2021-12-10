#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

struct Person * newPerson(char name[], int age) {
    struct Person creatingPerson;
    strcpy(creatingPerson.name, name);
    creatingPerson.age = age;

    return *creatingPerson;
}

int main() {
    char name[50];
    strcpy(name, "Chris");
    int age = 18;
    struct Person * newPerson(char name[], int age);

    return 0;
}