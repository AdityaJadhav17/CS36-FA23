/*************************************************************/
/*															 */
/* Student name : Aditya Jadhav								 */
/* Student ID: 1299200										 */
/* Homework 2 Program Set 3 								 */
/* Date : 10/08/2023                                         */
/* Program to calculate salary raise for employees. (Part-2) */
/* program will ask the user the amount of salaries to enter.*/
/*															 */
/*************************************************************/

#include<stdio.h>

int main()

{

    //Declaration

    int   num_of_Sal;
    float sal;
    float rate;
    float raise;
    float New_Sal;
    float tot_Sal;
    float tot_raise;
    float tot_New_Sal;

    //Data/Input

    printf("How many salaries do you want to enter?");
    scanf ("%d", &num_of_Sal);
    puts  ("");

    printf("                      Salary         Rate    Raise     New Salary\n");

    printf("-----------------------------------------------------------------\n");

    //Processing/Output

    tot_New_Sal = 0.0;
    tot_raise = 0.0;
    tot_Sal = 0.0;

    for(int i = 0; i < num_of_Sal; i++)
    {
        printf("Salary:");
        scanf("%f", &sal);

        if(sal > 0 && sal < 30000 )
        {
            rate = 7.00;
            raise = sal * 0.07;
        }
        else
            if(sal >= 30000 && sal <= 40000)
        {
            rate = 5.50;
            raise = sal * 0.055;
        }
        else
        {
            rate = 4.0;
            raise = sal * 0.04;
        }

        New_Sal = sal + raise;

        printf("                    %10.2f %10.2f %10.2f %10.2f\n",sal,rate,raise,New_Sal);

        tot_Sal += sal;
        tot_raise += raise;
        tot_New_Sal += New_Sal;

    }

    printf("-----------------------------------------------------------------\n");

    printf("Total               %10.2f            %10.2f %10.2f\n",tot_Sal,tot_raise,tot_New_Sal);

    return 0;

}
/*

TEST RUN 1
How many salaries do you want to enter?4

                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary:25000
                      25000.00       7.00    1750.00   26750.00
Salary:30000
                      30000.00       5.50    1650.00   31650.00
Salary:35000
                      35000.00       5.50    1925.00   36925.00
Salary:40000
                      40000.00       5.50    2200.00   42200.00
-----------------------------------------------------------------
Total                130000.00               7525.00  137525.00

TEST RUN 2
How many salaries do you want to enter?3

                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary:4500
                       4500.00       7.00     315.00    4815.00
Salary:45000
                      45000.00       4.00    1800.00   46800.00
Salary:450000
                     450000.00       4.00   18000.00  468000.00
-----------------------------------------------------------------
Total                499500.00              20115.00  519615.00

TEST RUN 3
How many salaries do you want to enter?5

                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary:23444
                      23444.00       7.00    1641.08   25085.08
Salary:67777
                      67777.00       4.00    2711.08   70488.08
Salary:89000
                      89000.00       4.00    3560.00   92560.00
Salary:69696
                      69696.00       4.00    2787.84   72483.84
Salary:68686
                      68686.00       4.00    2747.44   71433.44
-----------------------------------------------------------------
Total                318603.00              13447.44  332050.44

*/
