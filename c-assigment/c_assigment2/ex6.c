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
	int i,n,fact;

	fact=1;

	scanf("%d",&n);
	printf("\n Enter an integer %d:",n);
	if(n>0){
		for(i=1;i<=n;++i){
			fact*=i;
		}
		printf("\n your fact is %d",fact);
	}
	else {
	printf("erorr");
	}

		return EXIT_SUCCESS;
}
