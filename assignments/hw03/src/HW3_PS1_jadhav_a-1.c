/***************************************************************************/
/*Name : Aditya Jadhav                                                     */
/*Student ID : 1299200                                                     */
/*Homework 3 Program Set 1                                                 */
/*Date : 11/06/23                                                          */
/*This program calculates salary raises for employees.                     */
/*                                                                         */
/***************************************************************************/

#include <stdio.h>

// Function prototypes
double load(char name[20]);
double calcRate(double salary);
double calcRaise(double salary, double rate);
double calcNewSalary(double salary, double raise);
void calcTotalSalaries(double salary, double raise, double newSalary, double *totalSalary, double *totalRaise, double *totalNewSalary);
void salaryOutput(char name[20], double salary, double rate, double raise, double newSalary);
void totalOutput(double totalSalary, double totalRaise, double totalNewSalary);

int main()
{
    // Declarations
    int numEmployees;
    char name[20];
    double salary, rate, raise, newSalary;
    double totalSalary = 0, totalRaise = 0, totalNewSalary = 0;

    printf("How many employees : ");
    scanf("%d", &numEmployees);
    puts("");

    for (int i = 0; i < numEmployees; i++)
    {
        salary = load(name);
        rate = calcRate(salary);
        raise = calcRaise(salary, rate);
        newSalary = calcNewSalary(salary, raise);
        calcTotalSalaries(salary, raise, newSalary, &totalSalary, &totalRaise, &totalNewSalary);
        salaryOutput(name, salary, rate, raise, newSalary);
    }

    totalOutput(totalSalary, totalRaise, totalNewSalary);

    return 0;
}

double load(char name[20])
{
    double salary;
    printf("Enter the Employee's name: ");
    scanf(" %[^\n]", name);
    printf("Enter salary : ");
    scanf("%lf", &salary);
    puts("");
    return salary;
}

double calcRate(double salary)
{
    if (salary >= 0 && salary < 30000)
    {
        return 7.0;
    }
    else if (salary >= 30000 && salary <= 40000)
    {
        return 5.5;
    }
    else
    {
        return 4.0;
    }
}

double calcRaise(double salary, double rate)
{
    return salary * (rate / 100.0);
}

double calcNewSalary(double salary, double raise)
{
    return salary + raise;
}

void calcTotalSalaries(double salary, double raise, double newSalary, double *totalSalary, double *totalRaise, double *totalNewSalary)
{
    *totalSalary += salary;
    *totalRaise += raise;
    *totalNewSalary += newSalary;
}

void salaryOutput(char name[20], double salary, double rate, double raise, double newSalary)
{
    printf("Employee's Name   : %15s\n", name);
    printf("Salary            : %15.2f\n", salary);
    printf("Rate              : %14.1f%%\n", rate);
    printf("Raise             : %15.2f\n", raise);
    printf("New Salary        : %15.2f\n", newSalary);
    puts("");
    puts("");
}

void totalOutput(double totalSalary, double totalRaise, double totalNewSalary)
{
    printf("Total salary      : %15.2f\n", totalSalary);
    printf("Total Raise       : %15.2f\n", totalRaise);
    printf("Total New Salary  : %15.2f\n", totalNewSalary);
}


/*
TEST RUN

How many employees : 6

Enter the Employee's name: Daisy Yellow
Enter salary : 25000.00

Employee's Name   :    Daisy Yellow
Salary            :        25000.00
Rate              :            7.0%
Raise             :         1750.00
New Salary        :        26750.00


Enter the Employee's name: Rose Red
Enter salary : 30000.00

Employee's Name   :        Rose Red
Salary            :        30000.00
Rate              :            5.5%
Raise             :         1650.00
New Salary        :        31650.00


Enter the Employee's name: Periwinkle Pink
Enter salary : 35000.00

Employee's Name   : Periwinkle Pink
Salary            :        35000.00
Rate              :            5.5%
Raise             :         1925.00
New Salary        :        36925.00


Enter the Employee's name: Marigold Orange
Enter salary : 40000.00

Employee's Name   : Marigold Orange
Salary            :        40000.00
Rate              :            5.5%
Raise             :         2200.00
New Salary        :        42200.00


Enter the Employee's name: Iris Blue
Enter salary : 40001.00

Employee's Name   :       Iris Blue
Salary            :        40001.00
Rate              :            4.0%
Raise             :         1600.04
New Salary        :        41601.04


Enter the Employee's name: Lilacs Purple
Enter salary : 45000.00

Employee's Name   :   Lilacs Purple
Salary            :        45000.00
Rate              :            4.0%
Raise             :         1800.00
New Salary        :        46800.00


Total salary      :       215001.00
Total Raise       :        10925.04
Total New Salary  :       225926.04

*/
