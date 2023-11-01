/*
 * ex3Lab2.c
 *
 *  Created on: 24 oct. 2023
 *      Author: anasb
 */

/*
 * ex2LAb2.c
 *
 *  Created on: 24 oct. 2023
 *      Author: anasb
 */


#include<stdio.h>
#include<stdlib.h>

int main(){
	float A,B,C;
	printf("##########Console-output###\n");
	printf("Enter three numbers  : \n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f%f%f",&A,&B,&C);
	if(A<B){
		if(C<B) printf(" Largest number : %f \n",B);
		else printf(" Largest number : %f \n",C);
	}else {
		if(C<A) printf(" Largest number : %f \n",A);
		else printf(" Largest number : %f \n",C);

	}

	printf("##########################\n");
	printf("########################################################################\n");
	return 0;
}


