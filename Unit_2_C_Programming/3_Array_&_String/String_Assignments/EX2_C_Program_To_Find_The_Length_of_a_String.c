/*
 * StringEx2.c
 *
 *  Created on: 8 nov. 2023
 *      Author: anasb
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
	char A[100];
	int i=0;
	printf("Enter a string :\n" );
	fflush(stdin);
	fflush(stdout);
	gets(A);

 while(A[i]!=0)i++;

 printf("Length of string : %d ",i);

	return 0;
}
