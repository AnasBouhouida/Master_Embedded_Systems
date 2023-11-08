/*
 * product.c
 *
 *  Created on: 7 nov. 2023
 *      Author: anasb
 */
#include <stdio.h>
#include <stdlib.h>


int main() {

	float nbr,pr=1;
	int i;

	for(i=1;i<=4;i++){

		printf("Enter   number  %d :\n", i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&nbr);
		if (nbr==0) continue;
		pr=pr*nbr;

	}



		printf(" Product of numbers is  %.2f \n",pr);
	return 0;
}


