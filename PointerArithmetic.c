
/* For int of 4 bytes */

#include <stdio.h>
int main()
{
    int i =34;
    int *ptr = &i;

    printf("The value of ptr is %u\n", ptr);

    ptr++; //ptr = ptr + 1
    printf("The value of ptr is %u\n", ptr);

    ptr--; //ptr = ptr - 1
    printf("The value of ptr is %u\n", ptr);

    //Note that after each iteration 4 int bytes of memory are added for ptr++ & subtracted for ptr--
    return 0;

}



/* For char of 1 bytes */

#include <stdio.h>
int main()
{
    char c ='T';
    char *ptr = &c;

    printf("The value of ptr is %u\n", ptr);

    ptr++; //ptr = ptr + 1
    printf("The value of ptr is %u\n", ptr);

    ptr--; //ptr = ptr - 1
    printf("The value of ptr is %u\n", ptr);

    //Note that after each iteration 1 char bytes of memory are added for ptr++ & subtracted for ptr--
    return 0;

}



/* For float of 4 bytes */

#include <stdio.h>
int main()
{
    float x = 3.4;
    float *ptr = &x;

    printf("The value of ptr is %u\n", ptr);

    ptr++; //ptr = ptr + 1
    printf("The value of ptr is %u\n", ptr);

    ptr--; //ptr = ptr - 1
    printf("The value of ptr is %u\n", ptr);

    //Note that after each iteration 4 float bytes of memory are added for ptr++ & subtracted for ptr--
    return 0;

}