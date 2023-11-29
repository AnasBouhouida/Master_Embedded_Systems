/*
 * Quize3.c

 *
 *  Created on: 24 nov. 2023
 *      Author: anasb
 */
#include<stdio.h>
#include <stdlib.h>
void  reverse(int *Arr,int dim){
int temp,i=0,j=dim-1;

while(i<j){
	temp=Arr[i];
	Arr[i]=Arr[j];
	Arr[j]=temp;
	i++;
	j--;

}
}
int main(){
int A[]={1,2,3,4,5,6,7};
int i;
printf("input :\n ");
for(i=0;i<7;i++)
printf("%d  ",A[i]);
printf("\n");
printf("output  :\n ");
reverse(A,7);
for(i=0;i<7;i++)
printf("%d  ",A[i]);
return 0;

}
