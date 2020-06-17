#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct employee
{
    char name[50];
    int id;
    int exp;
    int salary;
};
int main()
{    int i,n=5;
    struct employee e1[n];
    for(i=0;i<n;i++)
    {
      printf("enter  employee name ");
     scanf("%s",&e1[i].name);
       printf("\nenter  employee id ");
       scanf("%d",&e1[i].id);
       printf("\nenter  employee experience ");
      scanf("%d",&e1[i].exp);
       printf("\nenter employee salary ");
        scanf("%d",&e1[i].salary);
    }
    printf("ALL EMPLOYEE DETAILS!!");
     for(i=0;i<n;i++)
     {
          printf("\nName \t: ");
        printf("%s \n",e1[i].name);

        printf("Id \t: ");
        printf("%d \n",e1[i].id);

        printf("Salary \t: ");
        printf("%d \n",e1[i].salary);

        printf("Experience \t: ");
        printf("%d",e1[i].exp);

        printf("\n");
    }
     }


