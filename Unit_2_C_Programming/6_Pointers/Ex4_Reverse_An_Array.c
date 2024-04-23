/*
 * Ex4Pointers.c
 *
 *  Created on: 16 févr. 2024
 *      Author: anasb
 */

#include<stdio.h>


#include<String.h>

int main(){
	int A[15],d,i,*p;
printf("Input the number of elements to store in the array (max 15) : \n");
fflush(stdin);
	fflush(stdout);
	scanf("%d",&d);
	printf("Input %d number of elements in the array : \n",d);
	p=&A[0];
for(i=0;i<d;i++){
printf("element %d: \n",i+1);
fflush(stdin);
	fflush(stdout);
	scanf("%d",p);
	p++;
}
p=&A[d-1];
printf("The elements of array in reverse order are :\n");
for(i=d;i>0;i--){
printf("element -%d: %d \n",i,*p);
p--;
}

	return 0;
}

