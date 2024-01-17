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
	char Alph;
			scanf("%c",&Alph);

			printf("\n enter your Alph:%c ",Alph);

		if( (Alph >='a' && Alph <='z')  || (Alph >='A' && Alph <='Z') ){
				printf("\n %c is alphabet",Alph);
			}


			else {
				printf("\n %C is not an alphabet",Alph);
					}

	return EXIT_SUCCESS;
}
