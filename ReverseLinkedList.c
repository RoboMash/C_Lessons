/* Reversing linkedlist using iterative method */

#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* Reverse(struct Node* head)
{
    struct Node *current,*prev,*next;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

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
        while(temp1->next != NULL) 
        
            temp1 = temp1->next;
            temp1->next = temp;
        
    }
    return head;
}

void Print(struct Node* head)
{
    while(head != NULL)
    {
        printf("%d",head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node* head = NULL; //Local Variable
    head = Insert(head, 2); //Insert: struct Node* Insert(struct Node* head, int data)
    head = Insert(head, 4); 
    head = Insert(head, 6 ); 
    head = Insert(head, 8 ); 
    Print(head);
    head = Reverse(head);
    Print(head);
}



/* Reversing linkedlist using recursion method */

// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//     int data;
//     struct Node* next;
// };

// struct Node* head;
// void Reverse(struct Node* p)
// {
//     if(p->next == NULL)
//     {
//         head = p;
//         return;
//     }
//     Reverse(p->next);
//     struct Node* q = p->next;
//     q->next = p;
//     p->next = NULL;
// }


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

void ReversePrint(struct Node* p)
{
    if(p == NULL) //Exit condition
    {
        printf("\n");
        return;  
    }
    ReversePrint(p->next); //Recursive call
    printf("%d", p->data); //First print the value in the node
}

int main()
{
    struct Node* head = NULL; //local variable
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5);
    ReversePrint(head);
}
