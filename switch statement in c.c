/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
int main()
{
    int num1,num2;
    char op;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("enter the operator:");
    scanf ("\n%c",&op);
    switch(op)
    {
        case'+':
        printf("sum:%d",num1+num2);
        break;
        
     switch(op)
        case'-':
        printf("diff:%d",num1-num2);
        break;
    
    switch(op)   
        case'*':
        printf("product:%d",num1*num2);
        break;
    
    switch(op)
        case'/':
        printf("Quotient:%d",num1/num2);
    
    default:
        printf("invalid operator");
    
}
}