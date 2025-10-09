/*
name:lemmy peter chege
reg:CT101/G/26481/25
description: while loop
*/


#include<stdio.h>

int main(){
	float balance=1000;
	float withdrawal;
	
	while(balance>0){
		printf("current balance is KES %2f\n",balance);
		printf("enter amount to withdraw:");
		scanf("%f",&withdrawal);
		
		balance=balance-withdrawal;
		printf("your new balance is KES %2f\n");
	}
	
	printf("account balance is inssuficient.");
	
	return 0;
}