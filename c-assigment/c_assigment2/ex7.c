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
	char o;
	float num1,num2;
	scanf("%c",&o);
	printf("\n Enter  operator %c",o);

scanf("%f%f",&num1,&num2);
	printf("\n Enter two num: num1= %f,num2= %f",num1,num2);

	switch (o){
	case'+':
		printf("\n num1+num2 =%f:",num1+num2);
		break;
	case'-':
			printf("\n num1-num2 =%f:",num1-num2);
			break;
	case'*':
			printf("\n num1*num2 =%f:",num1*num2);
			break;
	case'/':
			printf("\n num1/num2 =%f:",num1/num2);
			break;
	default :
printf("Erorr");
break;
	}

		return EXIT_SUCCESS;
}
