/*
 * StringEx3.c
 *
 *  Created on: 8 nov. 2023
 *      Author: anasb
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	char A[100],temp;
	int i,j;
	printf("Enter a string :\n" );
	fflush(stdin);
	fflush(stdout);
	gets(A);
	j=strlen(A);
if(j%2==0){
	for(i=0;i<strlen(A)/2;i++){
		temp=A[i];
A[i]=A[j-1];
A[j-1]=temp;
j--;
	}
}

	else{
		for(i=0;i<=strlen(A)/2;i++){
			temp=A[i];
	A[i]=A[j-1];
	A[j-1]=temp;
	j--;
		}

	}
printf("reverse string is : %s \n",A);

	return 0;
}


