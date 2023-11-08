/*
 * Ex1.c
 *
 *  Created on: 6 nov. 2023
 *      Author: anasb
 */
#include <stdio.h>
#include <stdlib.h>


int main() {

	float nbr,sum=0;
	int n,i;
	printf (" Enter n  numbers of elements  : \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);

	if (n==0) printf(" you entered null number :\n");
	else if (n<0) printf(" you entered a negative number \n :");
	else {

	for(i=1;i<=n;i++){

		printf("Enter   number  %d :\n", i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&nbr);
		if (nbr<0) break;
		sum=sum+nbr;

	}
	}

		sum=sum/(i-1) ;
		printf(" Average of numbers is  %.2f \n",sum);
	return 0;
}

