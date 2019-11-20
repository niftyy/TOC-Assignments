#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char data;
    struct node *next;
};

struct node *getNewNode(char data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct node **top, char data)
{
    struct node *newNode = getNewNode(data);
    if (newNode == NULL)
        return;
    newNode->next = *top;
    *top = newNode;
}

int isEmptyStack(struct node *top)
{
    return top == NULL;
}

char pop(struct node **top)
{
    if (isEmptyStack(*top))
        return 0;
    char data = (*top)->data;
    struct node *temp = *top;
    *top = (*top)->next;
    free(temp);
    return data;
}

void DeleteStack(struct node **top)
{
    struct node *temp, *p = *top;
    while (p != NULL)
    {
        temp = p;
        p = p->next;
        free(temp);
    }
}

int main()
{
    printf("Enter String: \n");
    char str[100];
    scanf("%s", str);
    struct node *top = NULL;
    push(&top, 'a');
    printf("Symbol:none\tPushed:a\n");
    int i = 0;
    while(str[i] == 'a')
    {
        push(&top, 'a');
        printf("Symbol:a\tPushed: a\n");
        i++;
    }
    while(str[i] == 'b')
    {
        pop(&top);
        printf("Symbol:b\tPopped: a\n");
        i++;
    }
    if(isEmptyStack(top))
    {
        printf("Stack : Zo\n");
        printf("Accepted\n");
    }
    else printf("Not Accepted\n");
    return 0;
}