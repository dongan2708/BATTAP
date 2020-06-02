#include <stdio.h>
#include <string.h>
#include <conio.h>

int main()
{
	char str1[10];
	char str2[10];
	char str3[10];
	char str4[10];
	char str5[10];
	char str6[30];
	int len;
	printf("\nEnter name 1: ");
	gets(str1);
	printf("\nEnter name 2: ");
	gets(str2);
	printf("\nEnter name 3: ");
	gets(str3);
	printf("\nEnter name 4: ");
	gets(str4);
	printf("\nEnter name 5: ");
	gets(str5);
	
	printf("\nEnter Code Name: ");
	gets(str6);
	strcat(str6, str1);
	strcat(str6, str2);
	strcat(str6, str3);
	strcat(str6, str4);
	strcat(str6, str5);
	printf("\nEnter Code Name Team: %s \t\n", str6);
	return (0);
}
