/*
 * Ex4.c
 *
 *  Created on: 17 déc. 2023
 *      Author: anasb
 */


#include "stdio.h"
#include "stdlib.h"

struct Student{
	char name[50];
	float marks;

};
struct Student  readstudent(int nb){
 struct Student C;
printf("for roll number %d:\n",nb+1);
printf("Enter name :\n");
fflush(stdin);
fflush(stdout);
scanf("%s",C.name);
printf("Enter marks:\n");
fflush(stdin);
fflush(stdout);
scanf("%f",&C.marks);

return C;
}
void printstudent(struct Student C,int i){
printf("information for roll number %d:\n",i+1);
printf("name: %s \n",C.name);
printf("marks: %f \n",C.marks);
}

int main(){
struct Student A[100];
int nb,i;

printf("Enter number of students: \n");
fflush(stdin);
fflush(stdout);
scanf("%d",&nb);
printf("Enter information of students :\n");
for(i=0;i<nb;i++)
A[i]=readstudent(i);
printf("Displaying information of students:\n");
for(i=0;i<nb;i++)
printstudent(A[i],i);

	return 0;
}
