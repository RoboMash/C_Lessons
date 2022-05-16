/* Printing data of an employee using structure */

#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 100;
    e1.salary = 25.89;
    strcpy(e1.name, "Mash");

    printf("%d\n", e1.code);
    printf("%f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}



/* Printing data of 3 employee using user input functions */

#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;

    printf("Enter the value for code of e1\n");
    scanf("%d", &e1.code);
    
    printf("Enter the value for salary of e1\n");
    scanf("%f", &e1.salary);

    printf("Enter the value for name of e1\n");
    scanf("%s", e1.name);

    
    printf("Enter the value for code of e2\n");
    scanf("%d", &e2.code);
    
    printf("Enter the value for salary of e2\n");
    scanf("%f", &e2.salary);

    printf("Enter the value for name of e2\n");
    scanf("%s", e2.name);


    printf("Enter the value for code of e3\n");
    scanf("%d", &e3.code);
    
    printf("Enter the value for salary of e3\n");
    scanf("%f", &e3.salary);

    printf("Enter the value for name of e3\n");
    scanf("%s", e3.name);

    return 0;
}



/* Pointers to structure */

#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("The Code of employee is: %d\n", emp.code);
    printf("The Salary of employee is: %f\n", emp.salary);
    printf("The Name of employee is: %s\n", emp.name);
}


int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    //(*ptr).code = 101; Or we can also use below code

    ptr->code = 101; //using arrow operator
    ptr->salary = 11.01; 
    strcpy(ptr->name, "Harry");

    show(e1);

    return 0;

}