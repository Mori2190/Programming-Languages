/*  This is a tutorial program that returns the number of days in the yearly quarters.
    This program could be improved upon by adding a function to check for a leap year
    and assign the days in Febrary based on whether or not the year is a leap year.
    
    No code was provided by the tutorial.
    
    Requirements:
    
    Write a program which computes and prints the sum of the days in all four quarters of the current year. Use variables to store these four values.
    If you want, you can use the code from the previous lab, but you will learn more if you write it from scratch.
    
    Expected output
    A leap year:
        Days in Q1 of the current year: 91
        Days in Q2 of the current year: 91
        Days in Q3 of the current year: 92
        Days in Q4 of the current year: 92
    
    An ordinary year:
        Days in Q1 of the current year: 90
        Days in Q2 of the current year: 91
        Days in Q3 of the current year: 92
        Days in Q4 of the current year: 92
*/

#include <stdio.h>

int main ()
{
    //Begin Days in Months definitions
    int DaysInJan = 31;
    int DaysInFeb = 28;
    int DaysInMar = 31;
    int DaysInApr = 30;
    int DaysInMay = 31;
    int DaysInJun = 30;
    int DaysInJul = 31;
    int DaysInAug = 31;
    int DaysInSep = 30;
    int DaysInOct = 31;
    int DaysInNov = 30;
    int DaysInDec = 31;
    // End Definition of days in months
    
    // Begining Quarter Definitions
    int Q1 = (DaysInJan + DaysInFeb + DaysInMar);
    int Q2 = (DaysInApr + DaysInMay + DaysInJun);
    int Q3 = (DaysInJul + DaysInAug + DaysInSep);
    int Q4 = (DaysInOct + DaysInNov + DaysInDec);
    //End Quarter Definitions
    
    //Begin output definitions
    printf("Days in Q1 of the current year: %d\n", Q1);
    printf("Days in Q2 of the current year: %d\n", Q2);
    printf("Days in Q3 of the current year: %d\n", Q3);
    printf("Days in Q4 of the current year: %d\n", Q4);
    //End Output
    
    //Define Return Code
    return 0;
}