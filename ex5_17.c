#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[15] = "New york";
	char str2[15] = "Washington";
	char chr = 'a', *loc;
	
	loc = strchr(str1, chr);
/* kiem tra su xuat hien cua gia tri ky tu duoc giu boi chr trong ten thanh pho day tien*/
    if(loc != NULL)
       printf("%c occurs in %s\n", chr, str1);
    else
       printf("%c does not occur in %s\n", chr,str1);

loc = strchr(str2, chr);
/*kiem tra su xuat hien cua gia tri trong ten thanh pho thu 2*/

    if(loc != NULL )
printf("%c occurs in %s\n", chr ,str2);
    else 
printf("%c does not occur in %s\n",chr, str2);
	return 0;
}
