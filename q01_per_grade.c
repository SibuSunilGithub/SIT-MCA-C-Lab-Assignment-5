/*
Input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate
percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

#include <stdio.h>
int main()
{
    int phy, chem, bio, mth, comp;
    float per;
    char grd;
    printf("Please Enter Your Physics, Chemistry, Biology, Mathematics, Computer Subject Marks Respectively:\n");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &mth, &comp);
    // Here we assume that all subject are 100 marks so full mark is 500
    per = (phy + chem + bio + mth + comp) / 5;
    if (per < 40)
    {
        grd = 'F';
    }
    else if (per < 60)
    {
        grd = 'E';
    }
    else if (per < 70)
    {
        grd = 'D';
    }
    else if (per < 80)
    {
        grd = 'C';
    }
    else if (per < 90)
    {
        grd = 'B';
    }
    else
    {
        grd = 'A';
    }
    printf("Your Percentage Is:%.2f\n", per);
    printf("Your Grade Is:%c", grd);
    return 0;
}