#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include <stdio.h>

int main(void) {
   int num1, num2, res;
   char op;
   
   printf("num1 >> ");
   scanf("%d", &num1);
   
   printf("num2 >> ");
   scanf("%d", &num2);
   
   printf("select (+ - * /) >> ");
   scanf(" %c", &op);
   
   if( op == '+' )
      res = add(num1,num2);
   else if ( op == '-' )
      res = sub(num1,num2);
   else if ( op == '*' )
      res = mul(num1,num2);
   else if ( op == '/' )
      res = div(num1,num2);
   
   printf("res : %d\n" ,res);
}
   
