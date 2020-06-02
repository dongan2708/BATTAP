#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[20];
	/* name is declared as a single dimensional character array*/
	
	puts("Enter your name:"); /*Displays a message */
	gets(name); /*Accepts the input*/
	puts("Hi there:");
	puts(name); /*Displays the input */
	return 0;
}
