#include <stdio.h>
int main()
{
    int i, result, num;
    printf("Select a number\n");
    scanf("%d", &num);
    result = num;
    for (i = num - 1; i > 0; i--)
    {
        printf("Result before calculation = %d\n", result);
        printf("i = %d\n", i);
        result = result * i;
        printf("Result after calculation = %d\n", result);
    }
    printf("Final result calculation = %d\n", result);
}
