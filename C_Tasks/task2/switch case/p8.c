#include <stdio.h>
#include <stdlib.h>

int main()
{   char op;
    float num1, num2, result;
      printf("WELCOME TO SIMPLE CALCULATOR\n");
      printf("Enter [number 1] then [ operator( + - * /)] then [number 2]\n");
      scanf("%f %c %f", &num1, &op, &num2);
       switch(op)
    {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid operator");
    }
    printf(" the result= %.2f",result);
    return 0;
}
