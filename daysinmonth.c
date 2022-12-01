//days in amonth using switch case
#include<stdio.h>
void main()
{
    int month;
    printf("enter the month number:");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
            printf("number of days in jan is 31");
            break;
        case 2:
            printf("number of days in feb is 28");
            break;
        case 3:
            printf("number of days in mar is 31");
            break;
        case 4:
            printf("number of days in april is 30");
            break;
        case 5:
            printf("number of days in may is 31");
            break;
        case 6:
            printf("number of days in jun is 30");
            break;
        case 7:
            printf("number of days in july is 31");
            break;
        case 8:
            printf("number of days in aug is 31");
            break;
        case 9:
            printf("number of days in sept is 30");
            break;   
        case 10:
            printf("number of days in oct is 31");
            break;
        case 11:
            printf("number of days in nov is 30");
            break; 
        case 12:
            printf("number of days in dec is 31");
            break;
    }
}
