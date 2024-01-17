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
	int  a,b;
			scanf("%d",&a);
			printf("Enter value of a:%d ",a);
			if(a%2==0){
				printf("\n your num is even ");
			}
			else if(a%2!=0){
				printf("\n your num is odd ");
			}

	return EXIT_SUCCESS;
}
