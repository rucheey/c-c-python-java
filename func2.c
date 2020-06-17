//pow//ceil//floor//rand
#include<stdio.h>
#include<math.h>
int main()
{
      double value1,value2,result,i,results;

      printf("\n\n enter value 1 ,that is base:" );
      scanf("%lf",&value1);
      printf("\n\n enter value 2, that is power:" );
      scanf("%lf",&value2);

      result = pow(value1,value2);
      printf("%lf raised to the power of %lf is %lf\n", value1, value2, result);

      printf("Square root of %lf is %lf\n", value1, sqrt(value1) );
      printf("Square root of %lf is %lf\n", value2, sqrt(value2) );


       result = ceil(value1);
       results= floor(value1);


     printf("The ceil of %f is %f\n", value1, result);
     printf("The floor of %f is %f\n", value1, results);



     for(int i = 0; i<5; i++)
        printf(" %d ", rand());



}
