#include <stdio.h>

int main()
{
    int Physics, Chemistry, Maths;
    float Total;

    printf("Enter the Physics marks\n");
    scanf("%d", &Physics);

    printf("Enter the Chemistry marks\n");
    scanf("%d", &Chemistry);

    printf("Enter the Maths marks\n");
    scanf("%d", &Maths);

    Total = (Physics + Chemistry + Maths)/3;

    if((Total<40) || Physics<33 || Chemistry<33 || Maths<33)
    {
        printf("The Total percentage is %f. Thus, Student has Failed", Total);
    }
    else
    {
        printf("The Total percentage is %f. Thus, Student has Passed", Total);
    }

    return 0;

}
