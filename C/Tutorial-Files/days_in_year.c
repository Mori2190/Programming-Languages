/*  This is a tutorial program that returns the number of days in the first half, second half, and whole year.
    This program could be improved upon by adding a function to check for a leap year and assign the days in
    Febrary based on whether or not the year is a leap year.*/

//  The program begins here.
#include <stdio.h> //This is to include the stdio.h file in this program.

int main() //The main function is required in C and CPP.
{
    int daysIn_CurrentFebruary  = 28;
    int daysIn_January          = 31;
    int daysIn_February = daysIn_CurrentFebruary;
    int daysIn_March            = 31;
    int daysIn_April            = 30;
    int daysIn_May              = 31;
    int daysIn_June             = 30;
    int daysIn_July             = 31;
    int daysIn_August           = 31;
    int daysIn_September        = 30;
    int daysIn_October          = 31;
    int daysIn_November         = 30;
    int daysIn_December         = 31;
    int daysInFirstHalf = (daysIn_January + daysIn_February + daysIn_March 
        + daysIn_April + daysIn_May + daysIn_June);
    int daysInSecondHalf = (daysIn_July + daysIn_August + daysIn_September 
        + daysIn_October + daysIn_November + daysIn_December);
    printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
    printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
    printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);
    return 0; //Returns an error code and ends the function. Useful for debuging faulty program code.
}
//  The program ends here.