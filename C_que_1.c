#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void add_book();
void disp_book();
void book_auth();
void count_book();

struct lib
{
    int acc_no;
    char book_title[20];
    char author[20];
    int cost;
}b[100];
int count;

int main()
{
    int ch;
    while(1)
    {
        printf("\n------------------------------\n");
        printf("1:Enter Book Information\n");
        printf("2:Display Book Information\n");
        printf("3:Book Author\n");
        printf("4:Count Books\n");
        printf("5:EXIT\n");
        printf("\nEnter your choice \n");
        printf("------------------------------\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            add_book();
            break;

            case 2:
            disp_book();
            break;

            case 3:
            book_auth();
            break;

            case 4:
            count_book();
            break;
            
            case 5:
            exit(0);
        }
    }
}

void add_book()
{
    if(count==9)
    {
        printf("\nSorry!!! Space Full\n");
        return;
    }
printf("\nEnter the detail of book --\n");
printf("\nEnter accession number of book = ");
scanf("%d",&b[count].acc_no);
printf("\nEnter the book title = ");
scanf("%s",b[count].book_title);
printf("\nEnter the name of author = ");
scanf("%s",b[count].author);
printf("\nEnter the cost of book = ");
scanf("%d",&b[count].cost);

count++;
}


void disp_book()
{
    int i;
    printf("\nDetail of Books\n");
    for(i=0;i<count;i++)
        {
            printf("\nBook Accession -- %d\nBook Title -- %s\nBook Author -- %s\nBook Cost -- %d\n",b[i].acc_no,b[i].book_title,b[i].author,b[i].cost);
        }
}


void book_auth()
{
    int i,cnt=0;
    char name[20];
    printf("\nEnter Name of the Author = ");
    scanf("%s",name);
    for(i=0;i<count;i++)
    {
        if(strcmp(name,b[i].author)==0)
        {
        cnt++;
        printf("\n %d\n%s\n%s\n%d",b[i].acc_no,b[i].book_title,b[i].author,b[i].cost);
        }
    }
    if(cnt==0)
    printf("\n no such book \n");
}


void count_book()
{
    printf("\n total no of book in library =%d",count);
}
