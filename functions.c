//strcmp//strcpy//strlen//strupr//strlwr
#include<stdio.h>
#include<string.h>
int main()
{    int result;
    char str1[50],str2[50];
    printf("\n\tEnter   string1:\t");
    scanf("%s",str1);
    printf("\n\tEnter another  string2: \t");
    scanf("%s",str2);

    printf("\nstring1=%s",str1);
    printf("\nstring2=%s",str2);

    result=strcmp(str1,str2);                                       /*compares two strings*/
    printf("\n\tresult=%d",result);

    printf("\nLength of string a = %d \n",strlen(str1));
    printf("\nLength of string b = %d \n",strlen(str2));            /*length find*/

    printf(" The upper case is\n%s\n", strupr (str1));                                 //upper case change
    printf(" The lower case is\n%s\n", strlwr (str1));                                 //lower case change

    printf("After reversing string is =%s",strrev(str1));          //reverses string
    printf("After reversing string is =%s",strrev(str2));


    strcpy(str2,str1);                                              /* copies value from str1 to str2*/

    printf(" \n\nThe new value of string2 is: %s",str2);




}
