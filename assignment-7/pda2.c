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

char stackTop(struct node *top)
{
    return top->data;
}

int main()
{
    printf("Enter String: \n");
    char str[100];
    scanf("%s", str);
    int length = strlen(str);
    struct node *top = NULL;
    int i = 0;
    while (str[i] != 'c')
    {
        push(&top, str[i]);
        printf("Symbol: %c\tPushed : %c\n", str[i], top->data);
        i++;
    }
    if (str[i] == 'c')
    {
        printf("Symbol: c\tStack: %c\n", top->data);
        i++;
    }
    while (i < length)
    {
        if (str[i] != top->data)
            break;
        printf("Symbol: %c\tPopped : %c\n", str[i], pop(&top));
        i++;
    }
    if (isEmptyStack(top))
    {
        printf("Stack : Zo\n");
        printf("Accepted\n");
    }
    else
    {
        printf("Stack : %c\n", top->data);
        printf("Not Accepted\n");
    }
    return 0;
}