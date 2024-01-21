/* Write a menu driven program that depicts the working of a library. The menu options should be:
1. Add book information
2. Display book information
3. List all books of given author
4. List the title of specified book
5. List the count of books in the library
6. List the books in the order of accession number
7. Exit

Create a structure called library to hold accession number, title of the book, author name, price of the book, and flag indicating whether book is issued or not.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100

void addbook();
void display();
void disp_list_authorbook();
void disp_list_title();
void count_books();
void sort_access();
int compare(const void* a,const void* b);

struct library{
    long long int access_no;
    char title[100];
    char author[100];
    float price;
    int flag;
};
struct library record[MAX];
int book_count=0;

int main()
{
    int choice;
    do
    {
       printf("\nLibrary Management System\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
                addbook();
            break;
        case 2:
                display();
            break;
        case 3:
                disp_list_authorbook();
            break;
        case 4:
                disp_list_title();
            break;
        case 5:
                count_books();
            break;
        case 6:
                sort_access();
            break;
        case 7:
              printf("Exit\n");
            break;
        default:
        printf("Wrong Choice please enter again\n");
            break;
        }
    } while (choice!=7);
    
}
//choice 1
void addbook()
{
    if(book_count<MAX)
    {
        printf("Enter the Accession number of the book= ");
        scanf("%lld",&record[book_count].access_no);
        fflush(stdin);
        getchar();
        printf("Enter the Title of the book= ");
        fgets(record[book_count].title,100,stdin);
        for(int i=0;(record[book_count].title)[i]!='\0';i++)
        {
            if((record[book_count].title)[i]=='\n')
            (record[book_count].title)[i]='\0';
        }
        printf("Enter the Author name of the book= ");
        fgets(record[book_count].author,100,stdin);
        for(int i=0;(record[book_count].author)[i]!='\0';i++)
        {
            if((record[book_count].author)[i]=='\n')
            (record[book_count].author)[i]='\0';
        }
        printf("Enter the Price of the book= ");
        scanf("%f",&record[book_count].price);
        getchar();
        record[book_count].flag=0;

        printf("Book added.\n");
        book_count++;
    }
    else
    {
        printf("The Library is full.");
    }
}
//choice 2
void display()
{
    for(int i=0;i<book_count;i++)
    {
        printf("Accession Number: %lld\n",record[i].access_no);
        printf("Title: %s\n",record[i].title);
        printf("Name of Author: %s\n",record[i].author);
        printf("Price: %f\n",record[i].price);
        printf("Status: %s\n",(record[i].price)==0?"Available":"Issued");
        printf("\n");
    }
}
//choice 3
void disp_list_authorbook()
{   char author_name[100];
    printf("Enter the Author name: ");
    getchar();
    fgets(author_name,100,stdin);
    for(int j=0;author_name[j]!='\0';j++)
        {
            if(author_name[j]=='\n')
            author_name[j]='\0';
        }
    int f=0;
    for(int i=0;i<book_count;i++)
    {
        if(strcmp(record[i].author,author_name)==0)
        {
          printf("Accession Number: %lld\n",record[i].access_no);
          printf("Title: %s\n",record[i].title);
          printf("Price: %f\n",record[i].price);
          printf("Status: %s\n",(record[i].price)==0?"Available":"Issued");
          printf("\n");
          f=1;
        }
    }
    if(f==0)
    {
        printf("The book by %s is not available.",author_name);
    }
}
//choice 4
void disp_list_title()
{
    long long int access;
    printf("Enter the accession number= ");
    scanf("%lld",&access);
    int f=0;
    for(int i=0;i<book_count;i++)
    {
        if(record[i].access_no==access)
        {
            printf("The title of the book:\n");
            printf("%s",record[i].title);
            f=1;
        }
    }
    if(f==0)
    printf("The book is not found.");
}
//choice 5
void count_books()
{
   printf("The number of books in the library: %d",book_count) ;
}
//choice 6
void sort_access()
{
    qsort(record,book_count,sizeof(struct library),compare);
    display();
}
//compare for qsort function
int compare(const void *a,const void *b)
{
    const struct library *book_a = (const struct library *)a;
    const struct library *book_b = (const struct library *)b;

    // Compare based on the access_no
    if (book_a->access_no < book_b->access_no) {
        return -1;
    } else if (book_a->access_no > book_b->access_no) {
        return 1;
    } else {
        return 0;  // Elements are equal
    }

}