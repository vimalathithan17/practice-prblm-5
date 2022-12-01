//simple calculator
#include<stdio.h>
void main()
{
    char op;
    float a,b;
    printf("enter the operation(+ or - or * or /):");
    fflush(stdin);
    scanf("%c",&op);
    printf("enter the first value:");
    scanf("%f",&a);
    printf("enter the second value:");
    scanf("%f",&b);
    switch(op)
    {
        case '+':
            printf("sum of %f and %f is:%f",a,b,a+b);
            break;
        case '-':
            printf("difference of %f and %f is:%f",a,b,a-b);
            break;
        case '*':
           printf("product of %f and %f is:%f",a,b,a*b);
            break;
        case '/':
            printf("quotient of %f and %f is:%f",a,b,a/b);
            break;
    }
        
}
