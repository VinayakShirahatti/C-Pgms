#include<stdio.h>
#include<conio.h>
void main()
 {
   float n1,n2;
   char op;
   float result;
   printf("\n ***** CALCULATOR ***** ");
   printf("\n Enter 1st Number:");
   scanf("%f",&n1);
   printf("\n Enter the operation :");
   scanf(" %c",&op);
   printf("\n Enter 2nd Number :");
   scanf("%f",&n2);
   switch (op)
    {
        case '+': result=n1+n2;
                  printf("\n Addition = %f",result);
                  break;
        case '-': result=n1-n2;
                  printf("\n Substraction = %f",result);
                  break;
        case '*': result=n1*n2;
                  printf("\n Multiplication = %f",result);
                  break;
        case '/': result=n1/n2;
                  printf("\n Division = %f",result);
                  break;
        default:
                ; printf("\n Choose proper operator");  
    }
  getch();

 }