/*************************************************************/
/*															 */
/* Student name : Aditya Jadhav								 */
/* Student ID: 1299200										 */
/* Homework 2 Program Set 1 								 */
/* Date : 10/08/2023                                         */
/* Program that will allow the user to select a filing       */
/* status through a menu, take Taxable Income(TI) as         */
/* input, and calculate the amount of tax due.			     */
/*															 */
/*************************************************************/

#include<stdio.h>

int main()
{

    //Declaration

    int stat;
    int TI;
    float tax_Amt;

    //Data/input

    printf("************Menu****************\n");
    printf("1) Single\n");
    printf("2) Married Filing Jointly\n");
    printf("3) Married Filing Separately\n");
    printf("4) Head of Household\n");
    printf("5) Exit\n");
    puts  ("");
    printf("********************************\n");
    puts  ("");

    printf("Enter a status : ");
    scanf ("%d", &stat);

    //Processing/Output

    switch(stat)
    {
        case 1:

            printf("Enter your taxable TI: $");
            scanf ("%d", &TI);

        if(TI > 0 && TI <= 24000)
        {
              tax_Amt = TI * 0.15;
        }
        if(TI > 24000 && TI <= 58000)
        {
              tax_Amt = (TI - 24000) * 0.28 + 3600.00;
        }
        if(TI > 58000 && TI <= 121300)
        {
              tax_Amt = (TI - 58000) * 0.31 + 13162.00;
        }
        if(TI > 121300 && TI <= 263750)
        {
              tax_Amt = (TI - 121300) * 0.36 + 32738.50;
        }
        if(TI > 263750)
        {
              tax_Amt = (TI - 263750) * 0.0396 + 84020.50;
        }
        break;

        case 2:

            printf("Enter your taxable TI: $");
            scanf ("%d", &TI);

        if(TI > 0 && TI <= 40100)
        {
                tax_Amt = TI * 0.15;
        }
        if(TI > 40100 && TI <= 96900)
        {
                tax_Amt = (TI - 40100) * 0.28 + 6015.00;
        }
        if(TI > 96900 && TI <= 147700)
        {
                tax_Amt = (TI - 96900) * 0.31 + 21919.00;
        }
        if(TI > 147700 && TI <= 263750)
        {
                tax_Amt = (TI - 147700) * 0.36 + 37667.00;
        }
        if(TI > 263750)
        {
                tax_Amt = (TI - 263750) * 0.0396 + 79445.00;
        }
        break;

        case 3:

            printf("Enter your taxable TI: $");
            scanf ("%d", &TI);

        if(TI > 0 && TI <= 20050)
        {
            tax_Amt = TI * 0.15;
        }
        if(TI > 20050 && TI <= 48450)
        {
                tax_Amt = (TI - 20050) * 0.28 + 3007.50;
        }
        if(TI > 48450 && TI <= 73850)
        {
                tax_Amt = (TI - 48450) * 0.31 + 10959.50;
        }
        if(TI > 73850 && TI <= 131875)
        {
                tax_Amt = (TI - 73850) * 0.36 + 18833.50;
        }
        if(TI > 131875)
        {
                tax_Amt = (TI - 131875) * 0.0396 + 39722.50;
        }
        break;

        case 4:

            printf("Enter your taxable TI: $");
            scanf ("%d", &TI);

        if(TI > 0 && TI <= 32150)
        {
                tax_Amt = TI * 0.15;
        }
        if(TI > 32150 && TI <= 83050)
        {
                tax_Amt = (TI - 32150) * 0.28 + 4822.50;
        }
        if(TI > 83050 && TI <= 134500)
        {
                tax_Amt = (TI - 83050) * 0.31 + 19074.50;
        }
        if(TI > 134500 && TI <= 263750)
        {
                tax_Amt = (TI - 134500) * 0.36 + 35074.00;
        }
        if(TI > 263750)
        {
                tax_Amt = (TI - 263750) * 0.0396 + 81554.00;
        }
        break;

        case 5:

            puts("");
            printf ("Exit program...");
            puts("");

            return 0;

        default:

            puts("");
            printf("You entered a wrong status. Program Exit . . .");
            puts("");

            return 0;

    }

            puts  ("");
            printf("The taxes owed are: $%0.2f", tax_Amt);
            puts  ("");

    return 0;

}
/*

TEST RUN 1
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter a status : 1
Enter your taxable TI: $50000

The taxes owed are: $10880.00

TEST RUN 2
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter a status : 5

Exit program...

TEST RUN 3
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter a status : a

You entered a wrong status. Program Exit . . .

TEST RUN 4
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter a status : 7

You entered a wrong status. Program Exit . . .

TEST RUN 5
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter a status : 4
Enter your taxable TI: $78000

The taxes owed are: $17660.50

TEST RUN 6
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter a status : 3
Enter your taxable TI: $78787

The taxes owed are: $20610.82

TEST RUN 7
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter a status : 2
Enter your taxable TI: $145000

The taxes owed are: $36830.00

TEST RUN 8
************Menu****************
1) Single
2) Married Filing Jointly
3) Married Filing Separately
4) Head of Household
5) Exit

********************************

Enter a status : Z

You entered a wrong status. Program Exit . . .

*/

