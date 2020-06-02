#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *c1;
	char *c2;
	char *c;
	int p;
	
	//cap phat bo nho cho chuoi c1//
	c1 = (char*)malloc(50*sizeof(char));
	//nhap chuoi 1//
	printf("Nhap chuoi thu nhat: ");
	gets(c1);
	
	//cap phat bo nho cho chuoi c2//
	c2 = (char*)malloc(50*sizeof(char));
	//nhap chuoi 2//
	printf("Nhap chuoi thu hai: ");
	gets(c2);
	
	do{
		c = strstr(c2, c1);
		//neu chuoi 1 nam trong chuoi 2//
		if(c != NULL) {
			p = c - c2;  //tim vi tri xuat hien: p//
			//neu p + 1 + do dai chuoi 1 == do dai chuoi 2 //
			if(p + strlen(c1) == strlen(c2)) {
				printf("chuoi 1 nam cuoi chuoi 2");
				break;
			}
			else{
				c2 = c2 + p + strlen(c1); 
			}
  		} else{
  			printf("chuoi 1 khong xuat hien cuoi chuoi 2: ");
  			break;
		  }
	}while(1);

	return 0;
}
