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
	float num1,num2,num3;
			scanf("%f",&num1);
			scanf("%f",&num2);
			scanf("%f",&num3);
			printf("\n your num1:%f ",num1);
			printf("\n your num2:%f ",num2);
			printf("\n your num3:%f ",num3);
			if(num1>=num2 && num1>=num3){
				printf("\n the largest num is %f",num1);
			}
			else if(num2>=num1 && num2>=num3){
				printf("\n the largest num is %f",num2);
			}

			else {
				printf("\n the largest num is %f",num3);
					}

	return EXIT_SUCCESS;
}
