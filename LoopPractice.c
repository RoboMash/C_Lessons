/* Multiplication Table */
#include <stdio.h>

int main()
{
    for(int i=1; i<=10; i++)
    {
        printf("2 X %d = %d\n", i, 2*i);
    }

    return 0;

}

/* Multiplication in reverse order */
#include <stdio.h>

int main()
{
    for(int i=10; i; i--)
    {
        printf("10 X %d = %d\n", i, 10*i);
    }

    return 0;

}

/* Sum of first 10 natural numbers using for loop */
#include <stdio.h>

int main()
{
    int i, sum=0, n=10;

    for(i=1; i<=n; i++)
    {
        sum += i;
    }
    printf("The value of sum(1 to 10) is %d", sum );
    return 0;

}

/* Sum of first 10 natural numbers using while loop */
#include <stdio.h>

int main()
{
    int i=1, sum=0, n=10;

    while(i<=n)
    {
        sum += i;
        i++;
    }
    printf("The value of sum(1 to 10) is %d", sum );
    return 0;

}

/* Factorial of a number */
#include <stdio.h>

int main()
{
    int i=0, n=3, factorial=1;
    for (i=1; i<=n; i++)
    {
        factorial *= i;
    }
    printf("The value of factorial %d is %d", n, factorial);

    return 0;

}

/* Prime number or not using loops */
#include <stdio.h>
int main()
{
    int i, n=2, prime=1; //change values of n to heck prime or not
    for(i=2; i<n; i++)
    {
        if (n%i==0)
        {
            prime = 0;
            break;
        }
    }

    if(prime==0)
    {
        printf("This is not a prime number");
    }

    else
    {
         printf("This is a prime number");
    }

    return 0;

}   