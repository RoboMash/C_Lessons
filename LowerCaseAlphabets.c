#include <stdio.h>

int main()
{
    //97-122 = a-z range in ASCII code lowercase values
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    if (ch<=122 && ch>=97)
    {
        printf("It is LowerCase");
    }
    else
    {
        printf("It is not lowercase");

    }

    return 0;

}