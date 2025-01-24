
#include <stdio.h>
//leap year
int main()
{
    int yr = 1900;

    (yr%4==0) ?
    (yr%100!=0?
      printf("The year %d is a leap year",yr):
     (yr%400==0 ? printf("The year %d is a leap year",yr):
       printf("The year %d is not a leap year",yr))):
            printf("The year %d is not a leap year",yr);
    return 0;
}
