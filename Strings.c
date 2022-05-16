#include <stdio.h>
int main()
{
    //char str[] = {'M', 'A', 'S', 'H', '\0'};

    //or we can instead use as shown below:

    char str[] = "MASH";

    printf("%s", str);
    return 0;
}


/* Print a string using loop */

#include <stdio.h>
int main()
{
    char str[] = "MASH";
    char *ptr = str;
    while(*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;

}


/* Print a string using a simple convenient method */

#include <stdio.h>
int main()
{
    char str[] = "Mash buddy";
    printf("%s\n", str);

    //or

    char *ptr = "Mash buddy";
    printf("%s\n", ptr);

    return 0;
}


/* Print a string by user input */

#include <stdio.h>
int main()
{
    char s[34];
    printf("Enter your name: \n");

    scanf("%s", s); //note that it is not &s here because s is already the address of the array

    printf("Your name is %s", s);

    return 0;

}


/* Print a MULTI-WORD string by user input */

#include <stdio.h>
int main()
{
    char s[34];
    printf("Enter your name: \n");

    gets(s); //this is used to print multiple string in place of scanf = ex: Robo Mash

    puts(s); //this is used to print multiple string in place of printf = ex: Robo Mash

    return 0;

}


/* Using strlen() function */

#include<stdio.h>
#include<string.h>

int main()
{
    char *st = "MASH";
    int a  = strlen(st);

    printf("The length of string st is %d", a);
    return 0;
}


/* Using Strcpy() function */

#include <stdio.h>
#include <string.h>

int main()
{
    char *st1 = "58";
    char st2[45];

    strcpy(st2, st1);

    printf("Now the st2 is: %s", st2);

    return 0;
}


// /* Using Strcat() function */

#include <stdio.h>
#include<string.h>
int main()
{
    char st1[45] = "Hello";
    char *st2 = "Mash";

    strcat(st1, st2);

    printf("Now the st1 is: %s", st1);

    return 0;
}



/* Using Strcmp() function */

#include <stdio.h>
#include<string.h>
int main()
{
    char st1[45] = "Hello";
    char *st2 = "Mash";

    int val = strcmp(st1, st2);

    printf("Now the val is: %d", val);

    return 0;
}