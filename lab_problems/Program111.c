/*Implement the following procedure to generate prime numbers from 1 to 100 into a program. 

step 1 Fill an array num[100] with numbers from 1 to 100
step 2 Starting with the second entry in the array, set all its multiples to zero.
step 3 Proceed to the next non-zero element and set all its multiples to zero.
step 4 Repeat step 3 till you have set up the multiples of all the non-zero elements to zero
step 5 At the conclusion of step 4, all the non-zero entries left in the array would be prime numbers, 
so print out these numbers.
*/
#include<stdio.h>
int main()
{
    // Step 1
    int num[100];
    for (int i = 0 ; i < 100 ; i++)
    {
        num[i] = i + 1;
    }
    
    // Step 2
    for (int i = 2 ; i < 100 ; i++)
    {
        if (num[i] % 2 == 0)
        {
            num[i] = 0;
        }
    }

    // Step 3
    for (int i = 3 ; i < 100 ; i++)
    {
        if (num[i] % 3 == 0)
        {
            num[i] = 0;
        }
    }

    // Step 4
    for (int i = 4 ; i < 100 ; i++)
    {
        if (num[i] != 0 && num[i - 1] == 0)
        {
            // Step 4
            for (int j = i + 1 ; j < 100 ; j++)
            {
                if (num[j] % num[i]  == 0)
                {
                    num[j] = 0;
                }
            }
        }
    }

    // Step 5
    for (int i = 0 ; i < 100 ; i++)
    {
        if (num[i] != 0)
        {
            printf("%d\n", num[i]);
        }
    }
}