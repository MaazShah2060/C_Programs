#include<stdio.h>

void main()
{
	int n,digit1,digit2,digit3;

	for(int i=1;i<=500;i++)
	{
		digit1=i/100;
		digit2=i/10 - digit1*10;
		digit3=i%10;

		if(digit1*digit1*digit1 + digit2*digit2*digit2 + digit3*digit3*digit3 == i)
			printf("%d\n",i);
	}

	
	return 0;
}