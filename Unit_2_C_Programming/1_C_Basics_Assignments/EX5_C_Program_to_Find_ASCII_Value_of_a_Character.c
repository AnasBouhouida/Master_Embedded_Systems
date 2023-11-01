/*
 * ex5.c
 *
 *  Created on: 22 oct. 2023
 *      Author: anasb
 */

#include<stdio.h>
#include<stdlib.h>

void main(){

	char c ;
	printf("##########Console-output###\n");
	printf("Enter a character:  \n");
	fflush(stdin);
		fflush(stdout);
		scanf("%c",&c);
		printf("ASCII value of %c = %d  \n",c,c);
		printf("########################################################################\n");
}


