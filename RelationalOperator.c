/* if - else condition */

#include <stdio.h>
int main()
{
    int age;
    printf("Enter the age: \n");
    scanf("%d", &age);

    if(age>=90)
    {
        printf("You are above the age of 90, hence you cannot drive");
    }
    else
    {
        printf("You are below the age of 90, hence you can drive");
    }

    return 0;
}


/* if - else if - else condition */

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if(num==1)
    {
        printf("The number is 1 \n");
    }
    else if(num==2)
    {
        printf("The number is 2 \n");
    }
    else
    {
        printf("The number is not 1 or 2. It is other number\n");
    }
    return 0;
}

/* if else approach using ternary operation method syntax*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a \n");
    scanf("%d", &a);
    //one liner syntax for if else
    (a < 5) ? printf("A is less than 5") : printf("A is not less than 5");
    return 0;
}

/* Switch operator */

#include<stdio.h>
int main()
{
    int rating;
    printf("Enter your rating (1-5)\n");
    scanf("%d", &rating);

    switch(rating)
    {
        case 1:
        printf("Your rating is 1\n");
        break;

        case 2:
        printf("Your rating is 2\n");
        break;

        case 3:
        printf("Your rating is 3\n");
        break;

        case 4:
        printf("Your rating is 4\n");
        break;

        case 5:
        printf("Your rating is 5\n");
        break;

        default:
        printf("Invalid Rating!\n");
        break;

    }

    return 0;
}