//  Calculate Gross Salary Of An Employee...

/*
Input Basic salary of an employee and calculate its Gross salary according to following slabs:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/

#include <stdio.h>
int main()
{
    // Input Salary From User
    int bas_sal, hra, da;
    float gross_sal;
    printf("Enter Basic Salary Of An Employee:\n");
    scanf("%d", &bas_sal);
    // Check Condition And Calculate
    if (bas_sal <= 10000)
    {
        hra = (bas_sal * 20) / 100;
        da = (bas_sal * 80) / 100;
    }
    else if (bas_sal <= 20000)
    {
        hra = (bas_sal * 25) / 100;
        da = (bas_sal * 90) / 100;
    }
    else
    {
        hra = (bas_sal * 30) / 100;
        da = (bas_sal * 95) / 100;
    }
    gross_sal = bas_sal + hra + da;
    printf("Gross Salary Is:%.2f\n", gross_sal);
    return 0;
}
