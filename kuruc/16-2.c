#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[256];
    int age;
    char gender[16];
} person;

void readperson(person *p);
void printperson(person p);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        person x;
        readperson(&x);
        printperson(x);
    }
    return 0;
}

void readperson(person *p)
{
    char n[256];
    printf("name?\n");
    scanf("%s", n);
    strcpy((*p).name, n);
    printf("age?\n");
    scanf("%d", &(*p).age);
    printf("gender?\n");
    scanf("%s", p->gender);
}

void printperson(person p)
{
    printf("name: %s\n", p.name);
    printf("age: %d\n", p.age);
    printf("gender: %s\n", p.gender);
}