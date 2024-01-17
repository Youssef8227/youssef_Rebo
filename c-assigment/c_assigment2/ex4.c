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
	int num;
			scanf("%d",&num);

			printf("\n  enter your num:%d ",num);

			if(num>=0){
				printf("\n the  num  %d is positive ",num);
			}
			else if(num<=0){
				printf("\n the  num %d is negative",num);
			}

			else {
				printf("\n the  num  %d is zero",num);
					}

	return EXIT_SUCCESS;
}
