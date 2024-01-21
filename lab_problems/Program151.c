/* Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the collage.
(a) Write a function to print names of all students who joined in a particular year.
(b) Write a function to print the data of a student whose roll number is given.
*/
#include<stdio.h>
#include<string.h>
void names_year(int year);
void information(char *roll);
struct data{
    char name[100];
    char roll_no[100];
    char Department[100];
    char Course[100];
    int y_joining;
};
struct data students[450];
int main()
{
    for(int i=0;i<450;i++)
    {
        getchar();
        printf("Enter the name of student %d: ",i+1);
        gets(students[i].name);
        printf("Enter the roll number of student %d: ",i+1);
        gets(students[i].roll_no);
        printf("Enter the department of student %d: ",i+1);
        gets(students[i].Department);
        printf("Enter the course of student %d: ",i+1);
        gets(students[i].Course);
        printf("Enter the year of joining of student %d: ",i+1);
        scanf("%d",&students[i].y_joining);
    }
    int year;
    printf("Enter the year of joining= ");
    scanf("%d",&year);
    names_year(year);

    getchar();
    char roll[100];
    printf("Enter the roll number:\n");
    gets(roll);

    int length=0;
    for(int i=0;roll[i]!='\0';i++)
    {
        length++;
    }
    information(roll);

}

void names_year(int year)
{
    for(int i=0;i<450;i++)
    {
        if(students[i].y_joining==year)
        {
            printf("%s\n",students[i].name);
        }
    }
}

void information(char *roll)
{
    for (int i = 0; i < 450; i++) {
        if (strcmp(roll, students[i].roll_no) == 0) {
            printf("Roll no: %s\n", students[i].roll_no);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].Department);
            printf("Course: %s\n", students[i].Course);
            printf("Year of joining: %d\n", students[i].y_joining);
            printf("\n");
        }
    }
}