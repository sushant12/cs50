#include<stdio.h>

int main(void)
{

int height;
printf("Height: ");
scanf("%d", &height);
for(int i = 0; i < height; i++) 
	{
		// Print the required spaces
        for(int j = 0; j < height-i-1; j++)
        {
            printf("%s", " ");
        }
        // Print the '#' character.
		for(int k = 0; k < i+1; k++)
		{
			printf("#");
		}
		printf("  ");
		for(int k = 0; k < i+1; k++)
		{
			printf("#");
		}
		printf("\n");
	}	
return 0;
}
