/*
* Author: Sushant Bajracharya(sussyoung9@gmail.com)
* Title: Mario
*/

#include<stdio.h>

int main(void)
{

	int height,i,j,k;
	printf("Height: ");
	scanf("%d",&height);

	for(i=0;i<height;i++){
		for(j=0;j<height-i-1;j++)
			printf(" ");
		for(k=0;k<i+2;k++)
			printf("#");
		printf("\n");
	}
return 0;
}
