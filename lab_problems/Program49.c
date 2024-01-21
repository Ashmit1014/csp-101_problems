/* write a program to decide division of a student as following rules.
(1) There are 5 paper in each semester
(2) Maximum marks may vary for each paper
(3) if below then 40% for any two paper result is fail.
(4) if below then 40% for any paper result paper due.
(5) if total % below 33% result fail.
(6) if total % between 33% to 45% result third division.
(7) if total % between 45% to 60% result second division.
(8) if total % between 60% to 70% result first division.
(9) if total % above 70% result PASS WITH HONS.*/
#include <stdio.h>
int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int maxMarks1, maxMarks2, maxMarks3, maxMarks4, maxMarks5;
    int totalMarks;
    float percentage;

    printf("Enter maximum marks for each paper:\n");
    printf("Maximum marks for paper 1: ");
    scanf("%d", &maxMarks1);
    printf("Maximum marks for paper 2: ");
    scanf("%d", &maxMarks2);
    printf("Maximum marks for paper 3: ");
    scanf("%d", &maxMarks3);
    printf("Maximum marks for paper 4: ");
    scanf("%d", &maxMarks4);
    printf("Maximum marks for paper 5: ");
    scanf("%d", &maxMarks5);

    printf("\nEnter marks obtained in each paper:\n");
    printf("Marks obtained in paper 1: ");
    scanf("%d", &marks1);
    printf("Marks obtained in paper 2: ");
    scanf("%d", &marks2);
    printf("Marks obtained in paper 3: ");
    scanf("%d", &marks3);
    printf("Marks obtained in paper 4: ");
    scanf("%d", &marks4);
    printf("Marks obtained in paper 5: ");
    scanf("%d", &marks5);

    totalMarks = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage=(float)((totalMarks*100)/(maxMarks1+maxMarks2+maxMarks3+maxMarks4+maxMarks5));
    float percentage1=(marks1*100)/maxMarks1;
    float percentage2=(marks2*100)/maxMarks2;
    float percentage3=(marks3*100)/maxMarks3;
    float percentage4=(marks4*100)/maxMarks4;
    float percentage5=(marks5*100)/maxMarks5;

    if((percentage1<40&&percentage2<40)||(percentage1<40&&percentage3<40)||(percentage1<40&&percentage4<40)||(percentage1<40&&percentage5<40)||(percentage2<40&&percentage3<40)||(percentage2<40&&percentage4<40)||(percentage2<40&&percentage5<40)||(percentage3<40&&percentage4<40)||(percentage3<40&&percentage5<40)||(percentage4<40&&percentage5<40))
    {
        printf("Student is fail");
    }
    else if((percentage1<40)||(percentage2<40)||(percentage3<40)||(percentage4<40)||(percentage5<40))
    {
        printf("The result is due");
    }
    else if(percentage<33)
    {
        printf("Student is fail");
    }
    else if(percentage>=33&&percentage<45)
    {
        printf("Result is Third division");
    }
    else if(percentage>=45&&percentage<60)
    {
        printf("Result is Second division");
    }
    else if(percentage>=60&&percentage<70)
    {
        printf("Result is First division");
    }
    else if(percentage>70)
    {
        printf("PASS WITH HONS");
    }
    

}