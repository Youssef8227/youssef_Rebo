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
	char a_lhp;
			scanf("%c",&a_lhp);
			printf("Enter your alpha:%c ",a_lhp);
			if(a_lhp=='i'){
				printf("\n your alph %c is vowel ",a_lhp);
			}
			else if(a_lhp=='o'){
				printf("\n your alph %c is vowel ",a_lhp);
			}
			else if(a_lhp=='e'){
						printf("\n your alph %c is vowel ",a_lhp);
					}
			else if(a_lhp=='a'){
						printf("\n your alph %c is vowel ",a_lhp);
					}
			else {
						printf("\n your alph %c is constant ",a_lhp);
					}

	return EXIT_SUCCESS;
}
