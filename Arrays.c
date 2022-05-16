/* Printing marks of students directly */
#include <stdio.h>

int main()
{
    int marks[4];
    marks[0] = 25;
    marks[1] = 65;
    marks[2] = 38;
    marks[3] = 89;

    printf("Marks of student 1 is: %d\n", marks[0]);
    printf("Marks of student 2 is: %d\n", marks[1]);
    printf("Marks of student 3 is: %d\n", marks[2]);
    printf("Marks of student 4 is: %d\n", marks[3]);

    return 0;
}


/* Printing marks of students via user */
#include <stdio.h>
int main()
{
    int marks[4];

    printf("Enter the value of marks for student 1:\n");
    scanf("%d", &marks[0]);
    printf("Enter the value of marks for student 2:\n");
    scanf("%d", &marks[1]);
    printf("Enter the value of marks for student 3:\n");
    scanf("%d", &marks[2]);
    printf("Enter the value of marks for student 4:\n");
    scanf("%d", &marks[3]);

    printf("You have entered %d %d %d and %d", marks[0], marks[1], marks[2], marks[3]);

    return 0;

}


/* Printing marks of students using Loops */

#include <stdio.h>

int main()
{
    int marks[5];

    for(int i=0; i<5; i++)
    {
        printf("Enter the value of marks for student %d: ", i+1);  //using i+1 to include all 5 elements, and to avoid ommission of last element[i+1 gives 1,2,3,4,5 & i gives 0,1,2,3,4]
        scanf("%d", &marks[i]);
    }

     for(int i=0; i<5; i++)
    {
        printf("The value of marks for student %d is: %d\n", i+1, marks[i]);
    }

    return 0;

}


/* Printing the arrays in an alternate initialization method */

#include <stdio.h>

int main()
{
    int a[]= {25, 65, 38};
    printf("The value of a[0] is %d\n", a[0]);
    printf("The value of a[1] is %d\n", a[1]);
    printf("The value of a[2] is %d\n", a[2]);

    return 0;
}



