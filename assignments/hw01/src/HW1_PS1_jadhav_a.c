/*************************************************************/
/*															 */
/* Student name : Aditya Jadhav								 */
/* Student ID: 1299200										 */
/* Homework 1 Program Set 1 								 */
/* Date : 09/12/2023                                         */
/* Program that takes the user's initials, prompts them to   */
/* input quantities of quarters, dimes, nickels, and pennies,*/
/* calculates the total value of the coins, and displays the */
/* result in a welcoming message.					         */
/*															 */
/*************************************************************/

#include<stdio.h>

int main()
{

	//Declaration

	int  quarters;
	int  dimes;
	int  pennies;
	int  nickels;
    int  cent_s;
    int  total_d;
    int  total_c;

	char first;
	char middle;
	char last;

	//Data/Input

	printf("Enter your initials, first, middle and last: ");
	scanf ("%c%c%c", &first, &middle, &last);
	puts  (" ");
	printf("Hello %c.%c.%c., let's see what your coins are worth. \n", first, middle, last);
	printf("Enter number of quarters: ");
	scanf ("%d", &quarters);
	printf("Enter number of dimes: ");
	scanf ("%d", &dimes);
	printf("Enter number of nickels: ");
	scanf ("%d", &nickels);
	printf("Enter number of pennies: ");
	scanf ("%d", &pennies);
	puts  (" ");

	//Processing/Calculations

    cent_s    = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    total_d  =  cent_s / 100;
    total_c  =  cent_s % 100;

	//Output

	printf("Number of quarters is %d.\n", quarters);
	printf("Number of dimes is %d.\n", dimes);
	printf("Number of nickels is %d.\n", nickels);
	printf("Number of pennies is %d.\n", pennies);
	puts  (" ");
	printf("Your coins are worth %d dollars and %d cents.", total_d, total_c );
	puts  (" ");

	return 0;

}
/*
Test Run 1
Enter your initials, first, middle and last: JTK

Hello J.T.K., let's see what your coins are worth.
Enter number of quarters: 4
Enter number of dimes: 0
Enter number of nickels: 0
Enter number of pennies: 0

Number of quarters is 4.
Number of dimes is 0.
Number of nickels is 0.
Number of pennies is 0.

Your coins are worth 1 dollars and 0 cents.

Test run 2
Enter your initials, first, middle and last: RHT

Hello R.H.T., let's see what your coins are worth.
Enter number of quarters: 0
Enter number of dimes: 10
Enter number of nickels: 0
Enter number of pennies: 0

Number of quarters is 0.
Number of dimes is 10.
Number of nickels is 0.
Number of pennies is 0.

Your coins are worth 1 dollars and 0 cents.

Test run 3
Enter your initials, first, middle and last: AAJ

Hello A.A.J., let's see what your coins are worth.
Enter number of quarters: 5
Enter number of dimes: 3
Enter number of nickels: 7
Enter number of pennies: 0

Number of quarters is 5.
Number of dimes is 3.
Number of nickels is 7.
Number of pennies is 0.

Your coins are worth 1 dollars and 90 cents.

Test run 4
Enter your initials, first, middle and last: RAJ

Hello R.A.J., let's see what your coins are worth.
Enter number of quarters: 5
Enter number of dimes: 4
Enter number of nickels: 3
Enter number of pennies: 2

Number of quarters is 5.
Number of dimes is 4.
Number of nickels is 3.
Number of pennies is 2.

Your coins are worth 1 dollars and 82 cents.

Test run 5
Enter your initials, first, middle and last: VAJ

Hello V.A.J., let's see what your coins are worth.
Enter number of quarters: 5
Enter number of dimes: 4
Enter number of nickels: 7
Enter number of pennies: 8

Number of quarters is 5.
Number of dimes is 4.
Number of nickels is 7.
Number of pennies is 8.

Your coins are worth 2 dollars and 8 cents.

*/
