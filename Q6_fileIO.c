// Q6. Write a C program to copy the contents of a student.txt file into another file called info.txt. [5]

#include <stdio.h>

void main()
{
    FILE *student, *info;
    student = fopen("D:\\BCA\\Exam practice\\student.txt", "r");
    info = fopen("D:\\BCA\\Exam practice\\info.txt", "w");

    char c;
    while ((c = fgetc(student)) != EOF)
        putc(c, info);

    fclose(student);
    fclose(info);
}