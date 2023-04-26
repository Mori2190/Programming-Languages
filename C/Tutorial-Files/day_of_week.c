#include <stdio.h>

int main(void) 
{
    int dayOfWeek = 1;
    /* your code */
    if (dayOfWeek == 0){
        printf("The day of the week is: Sunday");
        return 0;
    }
    if (dayOfWeek == 1){
        printf("The day of the week is: Monday");
        return 1;
    }
    if (dayOfWeek == 2){
        printf("The day of the week is: Tuesday");
        return 2;
    }
    if (dayOfWeek == 3){
        printf("The day of the week is: Wednesday");
        return 3;
    }
    if (dayOfWeek == 4){
        printf("The day of the week is: Thursday");
        return 4;
    }
    if (dayOfWeek == 5){
        printf("The day of the week is: Friday");
        return 5;
    }
    if (dayOfWeek == 6){
        printf("The day of the week is: Saturday");
        return 6;
    }
    if (dayOfWeek > 6 ){
        printf("Please enter a valid day of the week.\n Day 0 is Sunday.\n Day 6 is Saturday.");
        return 7;
    }
    if (dayOfWeek < 0 ){
        printf("Please enter a valid day of the week.\n Day 0 is Sunday.\n Day 6 is Saturday.");
        return 8;
    }
    return 9;
}