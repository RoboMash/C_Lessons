/* To check strings are equal using user inputs */

#include <stdio.h>
#include<string.h>
int main()
{
    char st1[34];
    char st2[34];
    char c;
    int i = 0;

    printf("Enter the value of first string\n");
    scanf("%s", st1);
    printf("Enter the value of second string character by character\n");
    
    while(c!='\n')
    {
        fflush(stdin); //used to flush or empty the stdin control to avoid override of two separate scanf functions
        
        scanf("%c", &c);
        
        st2[i] = c;
        i++;
    }

    st2[i-1] = '\0'; //using i-1 to compare both strings

    printf("The value of st1 is %s\n", st1);
    printf("The value of st2 is %s\n", st2);

    printf("strcmp for these strings return %d\n", strcmp(st1, st2));
    return 0;

}



/* Write own version of strlen using <string.h> */

#include <stdio.h>
int strlen(char * st)
{
    char *ptr = st;
    int len = 0;
    while(*ptr!= '\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char st[] = "Mash";
    int l = strlen(st);
    printf("The length of this string is %d", l);
    return 0;
}



/* Slicing the string */

#include <stdio.h>
void slice(char *st, int m, int n)
{
    int i = 0;
    while((m+i)<n)
    {
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}

int main()
{
    char st[] = "Marry";
    slice(st, 1, 4);
    printf("%s", st);
    return 0;
}



/* To find the occurence of a character in a string */

#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while(*ptr!= '\0')
    {
        if(*ptr==c)
        {
        count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char st[] = "Mashh";
    int count = occurence(st, 'h');
    printf("Occurences = %d", count);
    return 0;

}

