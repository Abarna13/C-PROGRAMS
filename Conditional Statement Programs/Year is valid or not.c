/*
Problem Statement
Write a program to find given a specific date ,check whether the date is valid or not. Year will be in range 1900 to 9999

Input Format
Accept three integer as a input


Output Format
Print the date is Valid or Invalid

Sample Input 0
29/02/2000

Sample Output 0
Valid

*/

#include <stdio.h>
#include <time.h>
#define MAX_YR  9999
#define MIN_YR  1900
//structure to store date
typedef struct
{
    int yyyy;
    int mm;
    int dd;
} Date;
// Function to check leap year.
//Function returns 1 if leap year
int  IsLeapYear(int year)
{
    return (((year % 4 == 0) &&
             (year % 100 != 0)) ||
            (year % 400 == 0));
}
// returns 1 if given date is valid.
int isValidDate(Date *validDate)
{
    //check range of year,month and day
    if (validDate->yyyy > MAX_YR ||
            validDate->yyyy < MIN_YR)
        return 0;
    if (validDate->mm < 1 || validDate->mm > 12)
        return 0;
    if (validDate->dd < 1 || validDate->dd > 31)
        return 0;
    //Handle feb days in leap year
    if (validDate->mm == 2)
    {
        if (IsLeapYear(validDate->yyyy))
            return (validDate->dd <= 29);
        else
            return (validDate->dd <= 28);
    }
    //handle months which has only 30 days
    if (validDate->mm == 4 || validDate->mm == 6 ||
            validDate->mm == 9 || validDate->mm == 11)
        return (validDate->dd <= 30);
    return 1;
}
int main(void)
{
    Date getDate = {0};
    int status = 0;


    scanf("%d/%d/%d",&getDate.dd,&getDate.mm,&getDate.yyyy);

    status = isValidDate(&getDate);
    if(status !=1)
    {
        printf("Invalid");
    }
    else
    {
        printf("Valid");
    }
    return 0;
}

