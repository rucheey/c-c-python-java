#include<stdio.h>
int main()
{
    int marks;
    printf("enter percentage");
    scanf("%d",&marks);
    if(marks>=80)
    printf("A grade!");
    if(marks<80&&marks>=70)
    printf("B grade!");
    if(marks<70&&marks>=60)
    printf("C grade!");
    if(marks<60&&marks>=45)
    printf("D grade!!");
    if(marks<45)
    printf("FAIL!");
}
