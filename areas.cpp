#include<iostream>
using namespace std;
double area(double );
double area(double,double);
float area(float);
float area(float,float);
double area(double r)
{
    return(3.14*r*r);
}
double area(double l,double b)
{
    return(l*b);
}
float area(float s)
{
    return(s*s);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}

int main()
{   int ch,i=0;
    float result,s,bs,ht;
    double l,b,r;
    do
    {



    cout<<"\n\nEnter shape press\n 1.Circle\n 2.Rectangle\n 3.Square\n 4.Triangle\n";
    cout<<"\n\nYour answer:\t  ";
    cin>>ch;






    switch(ch)
    {
        case 1:
           cout<<"enter radius of circle\t";
           cin>>r;


           result = area(r);
           cout<<"\narea of circle=\t"<<result;
           break;
        case 2:
           cout<<"\nEnter length and breadth\t";
           cin>>l>>b;
           result = area(l,b);
           cout<<"\narea of rectangle=\t"<<result;
           break;
        case 3:
           cout<<"\nenter side of square\t";
           cin>>s;
           result = area(s);
           cout<<"\narea of square=\t"<<result;
           break;
        case 4:
           cout<<"\nenter base and height of triangle\t";
           cin>>bs>>ht;
           result = area(bs,ht);
           cout<<"\narea of triangle=\t"<<result;
           break;




    }
i++;
 } while(i<4);



}
