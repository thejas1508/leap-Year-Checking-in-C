#include <stdio.h> 
#include <stdlib.h> 
void main() {
int year;
printf("Enter a Year :"); 
scanf("%d", &year);
if ((year % 400) == 0)
    printf("%d is a Leap Year \n", year); 
else if ((year % 100) == 0)
    printf("%d is a Not Leap Year \n", year); 
else if ((year % 4) == 0)
    printf("%d is a leap year \n", year);
else
    printf("%d is not a leap year \n", year);

}
