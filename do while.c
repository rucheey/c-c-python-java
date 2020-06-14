/* c program to add numbers until the user enter zero */
#include<stdio.h>
int main()
{
    int num,sum=0;

    do
    {  printf("enter a number");
       scanf("%d",&num);
       sum=sum+num;
    }
    while(num!=0);
        printf("the sum=%d",sum);
}

