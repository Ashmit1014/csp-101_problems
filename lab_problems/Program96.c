/* Write a program which finds four digit perfect squares where the number represented by the first two digits and the number represented by the last two digits are also perfect squares.*/
#include<stdio.h>
int main()
{
    for (int i = 1000 ; i <= 9999 ; i++)
    {
        //to check if number is perfect square
        int j = 0;
        while (j * j < i) {
        j++;
        }
        
        //to check if first two are prefect square
        int k = 0;
        while (k * k < (i/100)) {
        k++;
        }

        //to check if last two are prefect squares
        int  l = 0;
        while (l * l < (i%100)) {
        l++;
        }


        if ((j*j==i)&&(k*k==(i/100))&&(l*l==(i%100)))
        {
            if(i%100==0)
            printf("%d is a perfect square as %d %d0 are also perfect squares\n", i,i/100,i%100);
            else
            printf("%d is a perfect square as %d %d are also perfect squares\n", i,i/100,i%100);
        }
    }
}