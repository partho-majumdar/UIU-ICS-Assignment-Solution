#include <stdio.h>

void main()
{
    int input_value;

    printf("Enter any number from 1-7: ");
    scanf("%d", &input_value);

    if (input_value >= 1 && input_value <= 7)
    {
        if (input_value == 1)
        {
            printf("Saturday");
        }

        else if (input_value == 2)
        {
            printf("Sunday");
        }

        else if (input_value == 3)
        {
            printf("Monday");
        }

        else if (input_value == 4)
        {
            printf("Tuesday");
        }

        else if (input_value == 5)
        {
            printf("Wednesday");
        }

        else if (input_value == 6)
        {
            printf("Thursday");
        }

        else if (input_value == 7)
        {
            printf("Friday");
        }
    }

    else
    {
        printf("Enter valid value");
    }
}
