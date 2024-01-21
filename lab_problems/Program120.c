/*The first difference D1 of a sequence A of N elements is obtained by subtracting each element, except the last, from the next element in the array. The second difference D2 is defined as the first difference of Dl, and so on. For example, if

A: 1,2,4,7,11,16, 22, then
D1: 1,2,3,4, 5, 6
D2:  1,1,1,1,  1
D3:   0,0,0, 0

Write a program that reads a sequence of 25 elements in an array and finds its first, second, and third differences.*/
#include <stdio.h>
#include <stdlib.h>
#define TOTAL_INPUTS 25

void print_difference(int *D, int size);
int* difference_seq(int* seq, int size);

int main()
{
    int sequence[TOTAL_INPUTS];
    printf("Enter %d numbers: ", TOTAL_INPUTS);
    for (int i = 0 ; i < TOTAL_INPUTS ; i++)
    {
        scanf("%d", &sequence[i]);
    }

    int *D1 = difference_seq(sequence, TOTAL_INPUTS);
    int *D2 = difference_seq(D1, TOTAL_INPUTS - 1);
    int *D3 = difference_seq(D2, TOTAL_INPUTS - 2);
    
    print_difference(D1, TOTAL_INPUTS - 1);
    print_difference(D2, TOTAL_INPUTS - 2);
    print_difference(D3, TOTAL_INPUTS - 3);
    
}

int* difference_seq(int* seq, int size)
{   
    int *D = malloc(size*sizeof(int));
    for (int i = 0 ; i < size ; i++)
    {
        D[i] = seq[i+1] - seq[i];
    }
    return D;
}

void print_difference(int *D, int size)
{
    printf("D%d: ", TOTAL_INPUTS - size);
    for (int i = 0 ; i < size ; i++)
    {
        printf("%d ", D[i]);
    }
    printf("\n");
}