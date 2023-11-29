/*
 * Ex22.c
 *
 *  Created on: 25 nov. 2023
 *      Author: anasb
 */

#include<stdio.h>
#include <stdlib.h>
void swap(int *A,int *B,int n1,int n2){
	int i,temp;
	if(n1>n2){
	for(i=0;i<n1;i++){
	temp=A[i];
	A[i]=B[i];
	B[i]=temp;
	}
	}else
		for(i=0;i<n2;i++){
		temp=A[i];
		A[i]=B[i];
		B[i]=temp;
		}



}


int main(){
int A[100]={1,2,3,4,5,6,7};
int B[100]={9,10,11,12};
int i;
printf("input :\n ");
for(i=0;i<7;i++)
printf("%d  ",A[i]);
printf("\n");
for(i=0;i<4;i++)
printf("%d  ",B[i]);
printf("\n");
swap(A,B,7,4);

printf("output  :\n ");
for(i=0;i<4;i++)
printf("%d  ",A[i]);
printf("\n");
for(i=0;i<7;i++)
printf("%d  ",B[i]);
printf("\n");
return 0;

}

