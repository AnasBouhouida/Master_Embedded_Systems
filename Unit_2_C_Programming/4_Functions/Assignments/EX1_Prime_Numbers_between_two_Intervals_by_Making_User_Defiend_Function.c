/*
 * Ex1.c
 *
 *  Created on: 21 nov. 2023
 *      Author: anasb
 */


#include<stdio.h>
#include <stdlib.h>


int prime(int p){

	int i,j=0;

for(i=1;i<=p;i++){
	if(p%i==0) j++;
}
return j;
}









int main() {
	int i,min,max;
	printf("Enter two numbers : \n");
	fflush(stdin);
		fflush(stdout);
		scanf("%d%d",&min,&max);
printf("Prime numbers between %d et %d are : \n ",min,max);
for(i=min;i<=max;i++){
	if(prime(i)==2)
		printf("%d ",i);
}


	return 0;
}

