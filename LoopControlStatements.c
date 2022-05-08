/* While Loop */

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d", &a);

    while(a<=10)
    {
        printf(" %d ", a);
        a++;
    }
    
    return 0;

}


/* do-while loop */

#include <stdio.h>
int main()
{
    int i=0;
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    }
    while(i<=10);
    
    return 0;

}


/* For loop */

#include <stdio.h>

int main()
{
    for (int a=0; a<=10; a++)
    {
        printf("The value of a is %d \n", a);
        
        //printf("The value of a is %d \n", a+1); --> a+1 eliminates O in output and gives natural number
    }

    return 0;

}