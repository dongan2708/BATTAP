#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[20];
	/* name is declared as a single dimensional character array*/
	
	printf("Enter your name:"); /*Displays a message */
	scanf("%s", name); /*Accepts the input*/
	printf("Hi there: %s", name);
	 /*Displays the input */
	return 0;
}
