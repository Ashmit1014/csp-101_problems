/* Write a program which finds a four digit number AABB which is a perfect square. A and B represent different digits.*/
#include<stdio.h>
int main()
{
    for(int i=1000;i<=9999;i++)
    {
        int AA=i/100;
        int BB=i%100;
        int j=0;
        while(j*j<i)
        {
            j++;
        }

        int A1=AA/10;
        int A2=AA%10;
        int B1=BB/10;
        int B2=BB%10;
        if((A1==A2)&&(B1==B2)&&(j*j==i))
        {
            printf("%d is a perfect square as %d and %d are completely different from each other\n",i,AA,BB);
        }
    }
}