/*
 * ArraysEx4.c
 *
 *  Created on: 8 nov. 2023
 *      Author: anasb
 */


#include <stdio.h>
#include <stdlib.h>

int main (){
	float A[100],x;
	int i,j,n;
	printf("Enter no of elements :\n ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++) A[i]=i+1;
	for(i=0;i<n;i++) printf("%.1f  ",A[i]);
	printf("\n");
printf("Enter the element to be inserted :\n ");
fflush(stdin);
fflush(stdout);
scanf("%f",&x);
printf("Enter the location :\n ");
fflush(stdin);
fflush(stdout);
scanf("%d",&j);

	for(i=n;i>j-1;i--) A[i]=A[i-1];
	A[j-1]=x;
	for(i=0;i<=n;i++) printf("%.1f  ",A[i]);
	return 0;
	}
