/*
* Author: Sushant Bajracharya(sussyoung9@gmail.com)
* Title: Mario
*/

#include<stdio.h>

int main(void)
{

	int height;
	printf("Height: ");
	scanf("%d",&height);

	for(int i=0;i<height;i++){
		for(int j=0;j<height-i-1;j++)
			printf(" ");
		for(int k=0;k<i+2;k++)
			printf("#");
		printf("\n");
	}
return 0;
}
