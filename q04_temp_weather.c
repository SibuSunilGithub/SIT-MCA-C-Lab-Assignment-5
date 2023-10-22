// Read Temperature In Centigrade And Display A Suitable Message Accirding To Temperature State:

/*
Read temperature in Centigrade and display a suitable message according to temperature state :
Temp < 0 then Freezing weather
Temp 0 ̶10 then Very Cold weather
Temp 10 ̶20 then Cold weather
Temp 20 ̶30 then Pleasant weather
Temp 30 ̶40 then Hot weather
Temp >= 40 then Very Hot and Humid weather.
*/

#include <stdio.h>
int main()
{
    int temp;
    printf("Please Enter The Temperature In Centigrade:\n");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Freezing Weather.");
    }
    else
    {
        switch (temp / 10)
        {
        case 0:
            printf("Very Cold Weather.\n");
            break;
        case 1:
            printf("Cold Weather.\n");
            break;
        case 2:
            printf("Pleasant Weather.\n");
            break;
        case 3:
            printf("Hot Weather.\n");
            break;
        default:
            printf("Very Hot And Humid Weather.\n");
            break;
        }
    }
    return 0;
}
