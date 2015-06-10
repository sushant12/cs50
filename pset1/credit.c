#include<stdio.h>
#include<string.h>
#include <stdbool.h>
const int MAX_CARD_LENGTH = 16;
const char AMEX[4] = {'3','4','7'};
const char MASTERCARD[6] = {'5','1', '2', '3', '4'};
const char VISA = '4';	

int sum_digits(int p_digit)
{
    return (p_digit / 10) + (p_digit % 10);
}

bool isValid(char *p_number)
{
	int digit;
    	bool odd = true;
    
    	int sum = 0;
    	int i;

    // Run backwards from the last character
    for (i = strlen(p_number) - 1; i >= 0; i--)
    {
        digit = p_number[i] - '0';
    
        sum += odd? digit : sum_digits(digit * 2);
        odd = !odd;
    }
    
    // If congruent to modulo 10 - correct
    if (!(sum % 10))
        return true;
    else
        return false;
}



int main(void)
{

	long long credit_card_num;
	printf("Enter your credit card number: ");
	scanf("%lld", &credit_card_num);
	
	char num_str[MAX_CARD_LENGTH];
	sprintf(num_str,"%lld",credit_card_num);
	
	
	if(num_str[0] == VISA && isValid(num_str))
		printf("Visa Card");
	else if(num_str[0] == AMEX[0] && (num_str[1] == AMEX[1] || num_str[1] == AMEX[2]) && isValid(num_str))
		printf("American Express");
	else if(num_str[0] == MASTERCARD[0] &&(num_str[1]== MASTERCARD[1] || num_str[1]==MASTERCARD[2] || num_str[1]==MASTERCARD[3] || num_str[1]==MASTERCARD[4] || num_str[1]== MASTERCARD[0] ) && isValid(num_str))	
		printf("Master Card");	
	else
		printf("Invalid");
	
	return 0;
}


