/*
 * Ex2.c
 *
 *  Created on: 16 déc. 2023
 *      Author: anasb
 */
#include "stdio.h"
#include "stdlib.h"

struct Distance{
	float feet;
	float inch;

}A,B;
struct Distance  readDistance(){
 struct Distance C;
printf("Enter feet :\n");
fflush(stdin);
fflush(stdout);
scanf("%f",&C.feet);
printf("Enter inch:\n");
fflush(stdin);
fflush(stdout);
scanf("%f",&C.inch);

return C;
}
void sumDistance(struct Distance C,struct Distance B){
struct Distance result;

result.feet=C.feet+B.feet;
result.inch=C.inch+B.inch;
while(result.inch>=12){
	result.inch=result.inch-12;
	result.feet++;
}
printf("sum %.2f'-%.2f\"  ",result.feet,result.inch);
}


int main(){
printf("Enter 1st distance :\n");
A=readDistance();
printf("Enter 2nd distance :\n");
B=readDistance();
sumDistance(A,B);
	return 0;
}

