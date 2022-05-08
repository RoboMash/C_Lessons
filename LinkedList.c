/* Inserting a node at begining of list */

#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head; //Global variable, can be accessed anywhere
void Insert(int x)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print()
{
    struct Node* temp = head;
    printf("List is:  ");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    head = NULL; //empty list
    printf("How many numbers? \n");
    int n, i, x;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
} 




/* Inserting a node at nth position of list */

#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;
void Print()
{
   struct Node* temp = head;
   while(temp != NULL)
   {
    printf("%d", temp->data);
    temp = temp->next; 
   }
   printf("\n");
}

void Insert(int data, int n)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    temp1 -> data = data;
    temp1 -> next = NULL;
    if(n == 1)
    {
        temp1 -> next = head;
        head = temp1;
        return;
    }
    struct Node* temp2 = head;
    for(int i=0; i<n-2;i++)
    {
        temp2 = temp2 -> next;
    }
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;
}

int main()
{
    head = NULL; //empty list
    Insert(2, 1); //List: 2
    Insert(3, 2); //List: 2, 3
    Insert(4, 1); //List: 4, 2, 3
    Insert(5, 2); //List: 4, 5. 2, 3
    Print();
}




/* Deleting a node at nth position */

#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;
void Insert(int x)
{
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Delete(int n) //delete node at position n
{
    struct Node* temp1 = head;
    if(n==1)
    {
        head = temp1 -> next; // head now points to second node
        free(temp1);
        return;
    }
    int i;
    for (i=0; i<n-2; i++)
    {
        temp1 = temp1 -> next;
    // temp1 points to (n-1)th Node
    struct Node* temp2 = temp1 -> next; //nth Node
    temp1 -> next = temp2 -> next; // (n+1)th Node
    free(temp2);
    }
}

void Print()
{
    struct Node* temp = head;
    printf("List is:");
    while(temp != NULL)
    {
        printf(" %d",temp->data);
        temp= temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL; //empty list
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); // List: 2, 4 , 6, 5

    int n;
    printf("Enter a position\n");
    scanf("%d", &n);
    Delete(n);
    Print();
}



/* Print LinkedList using Recursion */
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
       struct Node* temp1 = head;
        while(temp1 -> next != NULL)

        temp1 = temp1->next;
        temp1->next = temp;

    }
    return head;
}

void Print(struct Node* p)
{
    if(p == NULL) //Exit condition
    {
        printf("\n");
        return;  
    }
    printf("%d", p->data); //First print the value in the node
    Print(p->next); //Recursive call
}

int main()
{
    struct Node* head = NULL; //local variable
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5);
    Print(head);
}