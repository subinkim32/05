#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 32;
	int num;
	int trial = 0;
	
	do
	{
		//1. input
		printf("Guess a number : ");
		scanf("%d", &num);
		
		//2. (wrong input) decision low or high
		if (num > answer)
			printf("high\n");
		else if (num < answer)
			printf("low\n");
		
		trial = trial + 1;
	}
	
	//3. (correct input) 
	while (num != answer);
		printf("Congratulations!\n");
	
	system("PAUSE");
	return 0;
}
