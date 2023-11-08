/*
 * ArraysEx5.c
 *
 *  Created on: 8 nov. 2023
 *      Author: anasb
 */



#include <stdio.h>
#include <stdlib.h>

int main (){
	float A[100],x;
	int i,j=10,n;
	printf("Enter no of elements :\n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		A[i]=i+1+j;
	j=j+10;
	}
	for(i=0;i<n;i++) printf("%.1f  ",A[i]);
	printf("\n");
printf("Enter the element to be searched :\n ");
fflush(stdin);
fflush(stdout);
scanf("%f",&x);
for(i=0;i<n;i++){
	if(A[i]==x)printf("Number found at the location : %d \n",i+1);
}
printf("the element not found \n ");
	return 0;
	}
