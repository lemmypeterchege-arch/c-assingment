/*
name: lemmy peter chege
reg no.:CT101/G/26481/25
description: 1D array
*/

#include<stdio.h>

int main(){
	
float revenue[7];

float total= 0.0, average;

int i;

printf("weekly revenue tracker\n");

for(i=0;i<7;i++){
	printf("enter revenue for day %d (in  KES):", i+1);
	scanf("%f", &revenue[i]);
	total+=revenue[i];
}

average=total/7;

printf("\n weekly summary\n");
printf("total weekly revenue is%2f\n",total);
printf("average daily revenue is %2f\n",average);

return 0;
}