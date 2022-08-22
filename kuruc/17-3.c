#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char name[255];
    int score;
} student;

void makestudent(student *dst, int id, char *name, int score);
void printstudent(FILE *f, student s);

int main(int argc, char *argv[])
{
    student students[4];
    makestudent(&students[0], 1, "Nobi", 100);
    makestudent(&students[1], 2, "Shizu", 90);
    makestudent(&students[2], 3, "Gouda", 80);
    makestudent(&students[3], 4, "Hone", 85);

    FILE *f = fopen("17-3.csv", "w");

    for (int i = 0; i < 4; i++)
    {
        printstudent(f, students[i]);
    }

    if (fclose(f) < 0)
        perror("failed to close csv file");

    return 0;
}

void makestudent(student *dst, int id, char *name, int score)
{
    dst->id = id;
    strcpy(dst->name, name);
    dst->score = score;
}

void printstudent(FILE *f, student s)
{
    fprintf(f, "%d,%s,%d\n", s.id, s.name, s.score);
}