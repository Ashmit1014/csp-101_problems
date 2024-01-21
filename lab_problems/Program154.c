/*A record contains name of cricketer, his age, number of test matches that he has played and the average runs that he has scored in each test match. Create an array of structure to hold records of 20 such cricketer and then write a program to read these records and arrange them in ascending order by average runs. Use the qusort( ) standard library function.
*/
#include<stdio.h>
#include<stdlib.h>
#define size 20

int compare(const void* a,const void *b);

struct cricketer_record{
    char name[100];
    int age;
    int test_no;
    float avg_runs;
};
struct cricketer_record data[size];

int main()
{
    for(int i=0;i<size;i++)
    {
        printf("Enter the name of the cricketer: ");
        fgets(data[i].name,100,stdin);
        for(int j=0;(data[i].name)[j]!='\0';j++)
        {
            if((data[i].name)[j]=='\n')
            (data[i].name)[j]='\0';
        }
        printf("Enter the age of the cricketer: ");
        scanf("%d",&data[i].age);
        getchar();
        printf("Enter the  number of test matches played by the cricketer: ");
        scanf("%d",&data[i].test_no);
        getchar();
        printf("Enter the average runs scored in each test match by the cricketer: ");
        scanf("%f",&data[i].avg_runs);
        getchar();
    }
    qsort(data,size,sizeof(struct cricketer_record),compare);

    printf("\nThe sorted records:\n");
    for(int i=0;i<size;i++)
    {
        printf("Name: %s\n",data[i].name);
        printf("Age: %d\n",data[i].age);
        printf("Number of test matches: %d\n",data[i].test_no);
        printf("Average Runs: %f\n",data[i].avg_runs);
    }
}

int compare(const void *a, const void *b) {
    const struct cricketer_record *cricketer_a = (const struct cricketer_record *)a;
    const struct cricketer_record *cricketer_b = (const struct cricketer_record *)b;

    // Compare based on the avg_runs field
    if (cricketer_a->avg_runs < cricketer_b->avg_runs) {
        return -1;
    } else if (cricketer_a->avg_runs > cricketer_b->avg_runs) {
        return 1;
    } else {
        return 0;  // Elements are equal
    }
}