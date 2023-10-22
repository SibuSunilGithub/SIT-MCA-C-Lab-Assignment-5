// Calculator Making...

#include <stdio.h>
int main()
{
    int num1, num2;
    char ch;

    printf("Enter Arithmetic Operator:\n");
    scanf("%c", &ch);
    // Why I Can't Use The The above line after all number input please find solutions...(Doubt.)
    printf("Enter First Number:\n");
    scanf("%d", &num1);

    printf("Enter Second Number:\n");
    scanf("%d", &num2);

    switch (ch)
    {
    case '+':
        printf("Result = %d", num1 + num2);
        break;
    case '-':
        printf("Result = %d", num1 - num2);
        break;
    case '*':
        printf("Result = %d", num1 * num2);
        break;
    case '/':
        printf("Result = %d", num1 / num2);
        break;
    case '%':
        printf("Result = %d", num1 % num2);
        break;
    }
    return 0;
}
