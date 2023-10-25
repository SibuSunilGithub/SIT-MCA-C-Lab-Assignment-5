// Compute the area of various geometrical shapes (circle, rectangle, and triangle) using a menu driven program.

#include <stdio.h>
#include <math.h>
int main()
{
    char ch;
    float radius, length, width, a, b, c, s, area_triangle;
    printf("To Find Out The Area Of The Desired Shapes, Please Enter The Character.\n");
    printf("Area Of The Circle Enter - C\n");
    printf("Area Of The Rectangle Enter - R\n");
    printf("Area Of The Triangle Enter - T\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'C':
    case 'c':
        printf("Please Enter The Radius Of The Circle:\n");
        scanf("%f", &radius);
        printf("Area Of The Circle Is %.2f\n", 3.14 * radius * radius);
        break;
    case 'R':
    case 'r':
        printf("Please Enter The Length Of The Rectangle:\n");
        scanf("%f", &length);
        printf("Please Enter The Width Of The Rectangle:\n");
        scanf("%f", &width);
        printf("Area Of The Rectangle Is:%.2f\n", length * width);
        break;
    case 'T':
    case 't':
        printf("Please Enter The Three Sides Of The Triangle:\n");
        scanf("%f%f%f", &a, &b, &c);
        s = (a + b + c) / 2;
        area_triangle = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area Of The Triangle Is:%.2f\n", area_triangle);
        break;
    default:
        printf("You Entered Invalid Character!\n");
    }
    return 0;
}