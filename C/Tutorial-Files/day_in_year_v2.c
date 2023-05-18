#include <stdio.h>

int main() // Code Given by problem.
{
	/* Beggining of First code block. */
    int day, month, year, leap;
    
    printf("Please enter the day: ");
    scanf("%d", &day);
    printf("Please enter the numerical Month: ");
    scanf("%d", &month);
    printf("Please enter the year: ");
	scanf("%d", &year);
	/* End of first code block. */
    /* Check if a year is a leap year
        Modified from given code. */
		if (year % 400 == 0)
            leap = 1;
        else if (year % 100 == 0)
            leap = 0;
        else if (year % 4 == 0)
            leap = 1;
        /* Code given for Leap Year:
            if (year % 400 == 0)
                puts("Leap");
            else if (year % 100 == 0)
                puts("Not leap");
            else if (year % 4 == 0)
                puts("Leap");
        End of given code segment. */
    /* End of Leap Year code */
    /* Beggining of second code block. */
    	switch (leap) {
    	    case 1 : {
        		switch (month) {
                    case 1 :
                        day=day;
                        break;
                    case 2 :
                        if (day >=30){
                            printf("Please enter a valid day.");
                            return 1;
                        }
                        else {
                            day=(day+31);
                            break;
                        }
                    case 3 :
                        day=(day+29+31);
                        break;
                    case 4 :
                        day=(day+31+29+31);
                        break;
                    case 5 :
                        day=(day+30+31+29+31);
                        break;
                    case 6 :
                        day=(day+31+30+31+29+31);
                        break;
                    case 7 :
                        day=(day+30+31+30+31+29+31);
                        break;
                    case 8 :
                        day=(day+31+30+31+30+31+29+31);
                        break;
                    case 9 :
                        day=(day+31+31+30+31+30+31+29+31);
                        break;
                    case 10 :
                        day=(day+30+31+31+30+31+30+31+29+31);
                        break;
                    case 11 :
                        day=(day+31+30+31+31+30+31+30+31+29+31);
                        break;
                    case 12 :
                        day=(day+30+31+30+31+31+30+31+30+31+29+31);
                        break;
                    default :
                        printf("Please enter a valid Month: 1-12");
                        break;
                }
                break;
            }
    	    default : {
        		switch (month) {
                    case 1 :
                        day=day;
                        break;
                    case 2 :
                        if (day >=29){
                            printf("Please enter a valid day.");
                            return 1;
                        }
                        else {
                            day=(day+31);
                            break;
                        }
                    case 3 :
                        day=(day+28+31);
                        break;
                    case 4 :
                        day=(day+31+28+31);
                        break;
                    case 5 :
                        day=(day+30+31+28+31);
                        break;
                    case 6 :
                        day=(day+31+30+31+28+31);
                        break;
                    case 7 :
                        day=(day+30+31+30+31+28+31);
                        break;
                    case 8 :
                        day=(day+31+30+31+30+31+28+31);
                        break;
                    case 9 :
                        day=(day+31+31+30+31+30+31+28+31);
                        break;
                    case 10 :
                        day=(day+30+31+31+30+31+30+31+28+31);
                        break;
                    case 11 :
                        day=(day+31+30+31+31+30+31+30+31+28+31);
                        break;
                    case 12 :
                        day=(day+30+31+30+31+31+30+31+30+31+28+31);
                        break;
                    default :
                        printf("Please enter a valid Month: 1-12");
                        return 3;
                }
            break;
            }
        }
    printf("The day of the year: %d", day);
/* End of my code. */
	return 0;  // Code Given by problem. 
}  // Code Given by problem.