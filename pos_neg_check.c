#include <stdio.h>
#include <conio.h>
int main()
{
    float n1;
    printf("\n Enter Number:");
    scanf("%f", &n1);
    if (n1 > 0)
    {
        printf("n1 is positive");
    }
    else if (n1 < 0)
    {
        printf("n1 is negative");
    }
    else // if (n1 == 0)
    {
        printf("n1 is neither positive nor negative");
    }
    
}
