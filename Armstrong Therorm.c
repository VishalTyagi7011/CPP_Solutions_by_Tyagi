/*
 ============================================================================
 Name        : Armstrong.c
 Author      : Vishal Tyagi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check_armstng_func(int num)
{
	int sum=0;
	int quotient=0;
	int num1=num;
	int power=0;
	bool flag=false;

	while(num1>0)
	{
		quotient=num1%10;
		power=pow(quotient,3);
		sum=sum+power;
		num1=num1/10;
	}
	if(sum==num)
	{
		flag=true;
	}
}

int main(void) {

	int num=153
	return EXIT_SUCCESS;
}
