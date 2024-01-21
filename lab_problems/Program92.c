/*92. When interest compounds q times per year at an annual rate of r % for n years, the principle p compounds to an amount a as per the following formula

a = p( 1 + r / q )^^nq   //where ^^ is power

Write a program to read 10 sets of p, r, n & q and calculate the corresponding as.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float p,r,q;
    double a;
    for(int i=1;i<=10;i++)
    {
    printf("Enter the set %d for values p,q,r,n\n",i);
    printf("Enter the interest compounds times per year, q= ");
    scanf("%f",&q);
    printf("Enter the annual rate(in percentage), r= ");
    scanf("%f",&r);
    printf("Enter the principal amount, p= ");
    scanf("%f",&p);
    printf("Enter the number of years, n= ");
    scanf("%d",&n);
    a=p*pow((1+(r/q)),n*q);
    printf("The amount for set %d of p,q,r,n i.e a = %lf\n",i,a);
    }
}