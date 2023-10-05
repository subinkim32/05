#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf("input a number : \n");
	scanf("%d", &num);
	
	if ( num > 0 )
		printf("This is a positive number.");
	else if ( num == 0)
		printf("This is zero.");
	else
		printf("This is a negative number.");
	
	system("PAUSE");
	return 0;
}
