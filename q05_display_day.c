// Read any day as a number and display it in words.

#include <stdio.h>
int main()
{
    int day;
    printf("Enter A Day:\n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("It Is Sunday");
        break;
    case 2:
        printf("It Is Monday");
        break;
    case 3:
        printf("It Is Tuesday");
        break;
    case 4:
        printf("It Is Wednesday");
        break;
    case 5:
        printf("It Is Thursday");
        break;
    case 6:
        printf("It Is Friday");
        break;
    case 7:
        printf("It Is Saturday");
        break;
    default:
        printf("Invalid Input!\nPlease Enter Valid Day Number.\n");
    }
    return 0;
}
