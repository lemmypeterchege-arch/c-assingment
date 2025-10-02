/*
name:lemmy chege
reg:CT101/G/26481/25
description: c program for data bundles
*/

#include<stdio.h>

int main(){
	printf("select data bundle:\n");
	printf("1.100mb for kes50:\n");
	printf("2.500mb for kes200:\n");
	printf("3.1GB for kes350:\n");
	printf("4.4GB for kes600\n");
	
int choice;	
	printf("enter your choice(1-4):");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("you selected 100mb.cost=kes50:");
			break;
			case 2:
			printf("you selected 500mb.cost=kes200:");
			break;
			case 3:
			printf("you selected 1GB.cost=kes350:");
			break;
			case 4:
			printf("you selected 4GB.cost=kes600:");
			break;
		default:
			printf("invalidchoice\n");
			break;
	}
	
	return 0;
}