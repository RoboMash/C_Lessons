#include <stdio.h>

int main()
{
    float celsius = 46, fahrenhite;
    fahrenhite = (1.8 * celsius) + 32;  // F =(9/5 * C) + 32 

    printf("The value if fahrenhite is: %.2f", fahrenhite);

    return 0;

}