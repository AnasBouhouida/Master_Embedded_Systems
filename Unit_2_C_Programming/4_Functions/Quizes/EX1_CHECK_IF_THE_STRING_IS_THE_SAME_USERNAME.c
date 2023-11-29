/*
 * Quize1.c
 *
 *  Created on: 23 nov. 2023
 *      Author: anasb
 */

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i,j=0;
	char A[100],B[4][100]={"Anas","Mohamed","Ibrahim","Morad"};
	printf("Enter your user name :\n");
	fflush(stdin);
	fflush(stdout);
	gets(A);
	for(i=0;i<=3;i++){
		if(stricmp(A,B[i])==0) {
			printf("Hello %s \n",B[i]);
			j++;}
	}
	if(j==0) printf("This name dosen't exit \n");




	return 0;
}
