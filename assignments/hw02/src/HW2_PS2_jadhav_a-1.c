/*************************************************************/
/*															 */
/* Student name : Aditya Jadhav								 */
/* Student ID: 1299200										 */
/* Homework 2 Program Set 2 								 */
/* Date : 10/08/2023                                         */
/* Program to calculate salary raise for employees.	(Part-1) */
/* program will exit after user enters salary as "-1".		 */
/*                                                           */
/*************************************************************/

#include<stdio.h>

int main()

{

    //Declaration

    float sal;
    float rate;
    float raise;
    float New_Sal;
    float tot_Sal;
    float tot_raise;
    float tot_New_Sal;

    //Data/Input

    printf("                      Salary         Rate    Raise     New Salary\n");

    printf("-----------------------------------------------------------------\n");

    printf("Salary:");
    scanf("%f", &sal);

    //Processing/Output

    tot_New_Sal = 0.0;
    tot_raise = 0.0;
    tot_Sal = 0.0;

    while(sal >= 0)
    {
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

        printf("Salary:");
        scanf("%f", &sal);

    }


    printf("-----------------------------------------------------------------\n");

    printf("Total               %10.2f            %10.2f %10.2f\n",tot_Sal,tot_raise,tot_New_Sal);

    return 0;

}
/*
TEST RUN 1
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
Salary:-1
-----------------------------------------------------------------
Total                130000.00               7525.00  137525.00

TEST RUN 2
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary:-1
-----------------------------------------------------------------
Total                     0.00                  0.00       0.00

TEST RUN 3
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary:23000
                      23000.00       7.00    1610.00   24610.00
Salary:28000
                      28000.00       7.00    1960.00   29960.00
Salary:30000
                      30000.00       5.50    1650.00   31650.00
Salary:38000
                      38000.00       5.50    2090.00   40090.00
Salary:45000
                      45000.00       4.00    1800.00   46800.00
Salary:-1
-----------------------------------------------------------------
Total                164000.00               9110.00  173110.00

TEST RUN 4
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary:46356
                      46356.00       4.00    1854.24   48210.24
Salary:89898
                      89898.00       4.00    3595.92   93493.92
Salary:45454
                      45454.00       4.00    1818.16   47272.16
Salary:34224
                      34224.00       5.50    1882.32   36106.32
Salary:45455
                      45455.00       4.00    1818.20   47273.20
Salary:23333
                      23333.00       7.00    1633.31   24966.31
Salary:32222
                      32222.00       5.50    1772.21   33994.21
Salary:333
                        333.00       7.00      23.31     356.31
Salary:-1
-----------------------------------------------------------------
Total                317275.00              14397.67  331672.66

TEST RUN 5
                      Salary         Rate    Raise     New Salary
-----------------------------------------------------------------
Salary:456437
                     456437.00       4.00   18257.48  474694.47
Salary:343344
                     343344.00       4.00   13733.76  357077.75
Salary:-1
-----------------------------------------------------------------
Total                799781.00              31991.24  831772.25

*/
