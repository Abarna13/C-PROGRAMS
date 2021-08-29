/*
Problem Statement
Write a program to check whether the time is valid or not

Input Format
Accept three integer as a input


Output Format
Valid or Not Valid

Sample Input 0
11:45:45

Sample Output 0
Valid

Sample Input 1
16:70:45

Sample Output 1
Not Valid

*/



#include <stdio.h>

main()

{

              int h , m ,s;

              scanf("%d:%d:%d",&h,&m,&s);

              if((h>=0&&h<24)&&(m>=0&&m<60)&&(s>=0&&s<60))

                             printf("Valid");

              else

                             printf("Not Valid");

}
