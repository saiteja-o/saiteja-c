//stack implementation using SLL
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node *top=0;
void push()
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d",&newnode->data);
    newnode->next=top;
    top=newnode;
}
void pop()
{
    struct node*temp;
    temp=top;
    if(top==0)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d",top->data);
        top=top->next;
        free(temp);
    }
}
void display()
{
    struct node*temp;
    temp=top;
     if(top==0)
    {
        printf("stack is empty");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
    
}
void main()
{
    int ch;
    do{
        printf("1:push 2:pop 3:display");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
        }
        
    }while(ch!=0);
}
