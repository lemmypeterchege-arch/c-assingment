/*
name:lemmy peter chege
reg no:CT101/G/26481/25
DATE:
*/


#include<stdio.h> 

int main(){
	float amount;
	printf("enter amount:");
	scanf("%f",&amount);
	
	if(amount>5000){
	
	else if(amount>=1000 && amount<=5000){
		discount = 0.05*amount;
	}
	else if(amount<1000){
		discount= 0;
	}
	
	amont payable=amuont - discount;
	printf("the amount before discount isksh. %2f\n", amount);
	printf("the discount is ksh.%2f\n",discount);
	printf("the amountt after discount is ksh.%2F\n",amount);
	
	return 0 ;
}