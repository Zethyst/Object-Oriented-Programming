#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int co;
    int ex;
    struct Node *next;
};
void traversal(struct Node *head)
{
    struct Node *ptr;
    ptr=head;
    while (ptr != NULL)
    {
        printf(" + %d", ptr->co);
        printf("x^%d", ptr->ex);
        ptr = ptr->next;
    }
}
void create(struct Node **head)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr1;
    char c;
    printf("Enter the coefficient : ");
    scanf("%d", &new->co);
    fflush(stdin);
    printf("Enter the exponent :");
    scanf("%d", &new->ex);
    fflush(stdin);
    new->next = NULL;
    *head = new;
    ptr1 = *head;
    printf("Do you want to add another Node ?");
    scanf("%c", &c);
    fflush(stdin);
    while (c == 'Y' || c == 'y')
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the coefficient :");
        scanf("%d", &new->co);
        printf("Enter the exponent :");
        scanf("%d", &new->ex);
        fflush(stdin);
        new->next = NULL;
        ptr1->next = new;
        ptr1 = ptr1->next;
        printf("Do you want to add another Node ?  ");
        scanf("%c", &c);
    }
    
}
struct Node *insert(struct Node *head, int co, int ex)
{
    struct Node *New, *PTR;
    New = (struct Node *)malloc(sizeof(struct Node));
    New->co = co;
    New->ex = ex;
    New->next = NULL;
    if (head == NULL)
    {
        head = New;
    }
    else
    {
        PTR = head;
        while (PTR->next != NULL)
        {
            PTR = PTR->next;
        }
            PTR->next = New;
        return (head);
    }
}

int main(void)
{
    struct Node *head, *HEAD1, *HEAD2, *HEAD3, *ptr1, *PTR2, *PTR3;
    head = NULL;
    HEAD1 = NULL;
    HEAD2 = NULL;
    HEAD3 = NULL;
    printf("\n\nEnter the values for the first polynomial : \n");
    create(&HEAD1);
    printf("\nThe First Polynomial:\n");
    traversal(HEAD1);
    printf("\n\nEnter the values for the second polynomial : \n");
    create(&HEAD2);
    printf("\nThe Second Polynomial:\n");
    traversal(HEAD2);

    PTR2=HEAD1;
    PTR3=HEAD2;

    while (PTR2 != NULL && PTR3 != NULL)
    {
        if (PTR2->ex == PTR3->ex)
        {
            HEAD3 = insert(HEAD3, PTR2->co + PTR3->co, PTR2->ex);
            PTR2 = PTR2->next;
            PTR3 = PTR3->next;
        }
        else if (PTR2->ex > PTR3->ex)
        {
            HEAD3 = insert(HEAD3, PTR2->co, PTR2->ex);
            PTR2 = PTR2->next;
        }
        else
        {
            HEAD3 = insert(HEAD3, PTR3->co, PTR3->ex);
            PTR3 = PTR3->next;
        }
        while (PTR2 != NULL)
        {
            HEAD3 = insert(HEAD3, PTR2->co, PTR2->ex);
            PTR2 = PTR2->next;
        }
        while (PTR3 != NULL)
        {
            HEAD3 = insert(HEAD3, PTR3->co, PTR3->ex);
            PTR3 = PTR3->next;
        }
    }
    printf("\n\nThe Addition: \n");
    traversal(HEAD3);
    return 0;
}