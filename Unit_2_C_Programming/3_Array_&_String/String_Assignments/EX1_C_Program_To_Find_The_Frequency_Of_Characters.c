/*
 * StringEx1.c
 *
 *  Created on: 8 nov. 2023
 *      Author: anasb
 */
#include <stdio.h>
#include <stdlib.h>

int main (){
	char A[100],c;
	int i=0,j=0;
	printf("Enter a string :\n" );
	fflush(stdin);
	fflush(stdout);
	gets(A);


	printf("Enter a character to find :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&c);
 while(A[i]!=0){
	if(A[i]==c) j++;
i++;
 }
 printf("Frequency of %c =%d ",c,j);
	return 0;
}

