/*
 * test.c
 *
 *  Created on: 22 nov. 2023
 *      Author: anasb
 */

#include<stdio.h>
#include <stdlib.h>

int  search(int Arr[],int dim,int nb){
int i,j=0,flag=0;

for (i=0;i<dim;i++){
if(Arr[i]==nb){
	j=i;
	flag=1;
}
}
if(flag==1)return j;
else return -1;

}

int main(){
int A[]={1,2,3,4,5,6,4};
int nb;
printf("The number is =   :\n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&nb);
if (search(A,7,nb)!=-1)
	printf("result= %d \n",search(A,7,nb));
else printf("The element dosen't exist \n ");

return 0;
}
