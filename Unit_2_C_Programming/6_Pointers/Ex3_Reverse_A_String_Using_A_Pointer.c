/*
 * Ex3Pointers.c
 *
 *  Created on: 16 févr. 2024
 *      Author: anasb
 */


#include<stdio.h>
#include<String.h>

int main(){
	int i;
 char *p1,*p2,A[50],B[50];
p1=A;
p2=B;

printf("Input a string : \n");
fflush(stdin);
	fflush(stdout);
	gets(A);
i=-1;
while(*p1){
p1++;
i++;
}
while(i>=0){
	p1--;
	*p2=*p1;
	p2++;
	i--;
}
*p2='\0';
printf("Reverse string is  :%s \n",B);

	return 0;
}

