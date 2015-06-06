/*
*Author: Sushant Bajracharya(sussyoung9@gmail.com)
*Title: greedy
*/
#include<stdio.h>
#include<math.h>

int main(void)
{

int const QUARTER = 25;
int const DIME = 10;
int const NICKEL = 5;

float entered_amount = 0;

int cent_amount = 0;
int quarter_count = 0;
int leftover = 0;
int dime_count = 0;
int nickel_count = 0;
int total_coins = 0;

printf("How much change is owed? ");
scanf("%f", &entered_amount);

//converting dollar into cents
cent_amount = (int)round(entered_amount * 100);

//quarter
quarter_count = cent_amount / QUARTER;
leftover = cent_amount % QUARTER;

//dime
dime_count = leftover / DIME;
leftover = leftover % DIME;

//NICKEL
nickel_count = leftover / NICKEL;
leftover = leftover % NICKEL;

total_coins = quarter_count+dime_count+nickel_count+leftover;

printf("%d",total_coins);
return 0;
}
