#include <stdio.h>

void main()
{
    int input_value;
    printf("Enter any value: ");
    scanf("%d", &input_value);

    int sum = 0;
    for (int i = 1; i <= input_value; i++)
    {
        sum = sum + i;
    }

    printf("Answer: %d", sum);
}
