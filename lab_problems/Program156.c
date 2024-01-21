/*Suppose a file contains student’s records with each record containing name and age of a student. Write a program to read these records and display them.*/

/*Assuming the data in the file is formatted as: name age
eg.
Amit 5
Aman 9
Aryan 10
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Program156_students.txt","r");

    if(ptr==NULL)
    {
        printf("File does not exist");
        exit(0);
    }

    printf("Student Records:\n");

    // Read and display records from the file
    char name[100];
    int age;

    while (fscanf(ptr, "%s %d", name, &age) != EOF) {
        printf("Name: %s\nAge: %d\n\n", name, age);
    }

    // Close the file
    fclose(ptr);
    
}