#include <stdio.h>


int main(){

    int DayOfWeek = 19;

    switch (DayOfWeek)
    {
    case 1:
       printf("it is Monday");
       break;
    case 2:
       printf("it is Tuesday");
       break;
    case 3:
       printf("it is Wednesday");
       break;
    case 4:
       printf("it is Thursday");
       break;
    case 5:
       printf("it is Friday");
       break;
    case 6:
       printf("it is Saturday");
       break;
    case 7:
       printf("it is Sunday");
        break;
    
    default:
        printf("Please only enter a number (1-7)");
        break;
    }





    return 0;
}