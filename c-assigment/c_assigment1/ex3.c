/*
 ============================================================================
 Name        : assgiment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,temp;
	scanf("%f",&a);
	scanf("%f",&b);
	printf("\n enter your value a = %f",a);
	printf("\n enter your value b = %f",b);
temp=a;
a=b;
b=temp;
printf("\n After swapping, value of a =%f",a);
printf("\n After swapping, value of b =%f",b);
	return EXIT_SUCCESS;
}
