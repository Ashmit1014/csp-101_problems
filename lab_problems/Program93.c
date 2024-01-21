/*Write a program which to find the grace marks for a student using switch. The user should enter the class obtained by the student and the number of subjects he has failed in.
   - If the student gets first class and the number of subjects he failed in is greater than 3, then he does not get any grace.If the number of subjects he failed in is less than or equal to 3 then the grace is of 5 marks per subject.
   - If the student gets second class and the number of subjects he failed in is greater than 2, then he does not get any grace. If the number of subjects he failed in is less than or equal to 2 then the grace is of 4 marks per subject.
   - If the student gets third class and the number of subjects he failed in is greater than 1, then he does not get any grace. If the number of subjects he failed in is equal to 1 then the grace is of 5 marks per subject */
#include<stdio.h>
int main()
{
    int class,subject_f;
    int grace;
    printf("Enter the class= ");
    scanf("%d",&class);
    printf("Enter the number of subjects failed in= ");
    scanf("%d",&subject_f);
    switch (class)
    {
        case 1: 
           switch(subject_f>3)
           {
            case 0:
                grace= 5;
                printf("The grace is %d marks per subject\n",grace);
                printf("Hence,the grace is of %d marks\n",grace*subject_f);
                break;
            case 1:
                grace=0;
                printf("The grace is %d marks per subject.\nHence,there is no grace.\n",grace);
                break;
           }
            break;

        case 2:
            switch(subject_f>2)
           {
            case 0:
                grace= 4;
                printf("The grace is %d marks per subject\n",grace);
                printf("Hence,the grace is of %d marks\n",grace*subject_f);
                break;
            case 1:
                grace=0;
                printf("The grace is %d marks per subject.\nHence,there is no grace.\n",grace);
                break;
           }
                break;
        case 3:
            switch(subject_f>1)
           {
            case 0:
                grace= 5;
                printf("The grace is %d marks per subject\n",grace);
                printf("Hence,the grace is of %d marks\n",grace*subject_f);
                break;
            case 1:
                grace=0;
                printf("The grace is %d marks per subject.\nHence,there is no grace.\n",grace);
                break;
           }
            break;

        default:
            printf("Invalid Input\n");
    }
}