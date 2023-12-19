/*
 * Ex1.c
 *
 *  Created on: 16 déc. 2023
 *      Author: anasb
 */

#include "stdio.h"
#include "stdlib.h"

struct Student{
	char name[50];
	int roll;
	float marks;

};
struct Student  readstudent(){
 struct Student C;
printf("Enter name of student :\n");
fflush(stdin);
fflush(stdout);
scanf("%s",C.name);
printf("Enter his roll:\n");
fflush(stdin);
fflush(stdout);
scanf("%d",&C.roll);
printf("Enter his marks:\n");
fflush(stdin);
fflush(stdout);
scanf("%f",&C.marks);

return C;
}
void printstudent(struct Student C){
printf("name: %s \n",C.name);
printf("roll: %d \n",C.roll);
printf("marks: %f \n",C.marks);
}

int main(){
struct Student A;
A=readstudent();
printstudent(A);

	return 0;
}
