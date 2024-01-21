/*A university has the following rules for a student to qualify for a degree with A as the main subject and B as the subsidiary subject:
(a) He should get 55 percent or more in A and 45 percent or more in B.
(b) If he gets less than 55 percent in A he should get 55 percent or more in B. However, he should get at least 45 percent in A.
(c) If he gets less than 45 percent in B and 65 percent or more in A he is allowed to reappear in an examination in B to qualify.
(d) In all other cases he is declared to have failed.

Write a program to receive marks in A and B and Output whether the student has passed, failed or is allowed to reappear in B.*/
#include <stdio.h>
int main()
{
    float A, B;
    printf("Input percentage for main subject A: ");
    scanf("%f", &A);
    printf("Input percentage for subsidiary subject B: ");
    scanf("%f", &B);

    if (A >= 55 && B >= 45)
    {
        printf("Student is passed");
    }
    else if (A <= 55 && A >= 45 && B >= 55)
    {
        printf("Student is passed");
    }
    else if (B <= 45 && A >= 65)
    {
        printf("Student is allowed to reappear");
    }
    else
    {
        printf("Student is failed");
    }
    printf("\n");
}