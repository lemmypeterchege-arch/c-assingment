/*


*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){
	int secretnumber, guess, attempts=0;
	srand(time(0));
	secretnumber=rand()%20+1;
	
	printf("welcome to the guessing game\n");
	
	do{
	printf("enter your guess:");
	scanf("%d",&guess);
	attempts++;
	
	if(guess>secretnumber){
		printf("too high!\n");
	}else if(guess<secretnumber){
		printf("too low!\n");
	}else{
		printf("congratulations. you guessed correctly\n");
	}
	}while(guess=secretnumber);
	
	printf("it took you %d attempts too guess correctly");

	return 0;
	
}