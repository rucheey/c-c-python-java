#include<stdio.h>
int main()
 {
     int a,b,c,s,m,minus,d,mod;


    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    s=a+b;
    minus=a-b;
    d=a/b;
    m=a*b;
    mod=a%b;
    printf("\nThe sum of %d and %d is %d",a,b,s);
    printf("\nThe difference of %d and %d is %d",a,b,minus);
    printf("\nThe quotient of %d and %d is %d",a,b,d);
    printf("\nThe product of %d and %d is %d",a,b,m);
    printf("\nThe modulus of %d and %d is %d",a,b,mod);
}
