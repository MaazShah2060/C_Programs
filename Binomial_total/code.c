#include<stdio.h>
 
long factorial(float);
 
main()
{
    float total = 0;
   for (float i = 1; i <= 7; i++)
   {
       total = total + (i/factorial(i));
   }
   printf("%f",total);
   return 0;
}
 
long factorial(float n)
{
    float c;
   long result = 1;
 
   for( c = 1 ; c <= n ; c++ )
         result = result*c;
 
   return ( result );
}