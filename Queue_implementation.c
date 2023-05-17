//Queue implentation
#include <stdio.h>
# define N 7
int queue [N];
int rear =-1;
int front = -1;
int y=0;

void enqueue(int x);
void dequeue();
void peek();
void display();


int main() {
   int choice,i,x;
   do{
   printf("1:enqueue 2:dequeue 3:peek 4:display");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1: printf("Enter element you want to insert");
               scanf("%d",&i);
               enqueue(i);
               break;
        case 2:dequeue();
               break;
        case 3:peek();
               break;
        case 4:display();
              break;
        default:printf("invalid input");
        
   }
   printf("do you want to do any operations on the queue?(0/1)");
        scanf("%d",&x);
   }while(x);
    
    return 0;
}




void enqueue (int x)
{
    if (rear == N-1)
    {
        printf("No Space Is Queue, Cannot Enter %d\n", x);
    }
    else if (rear == -1 && front == -1) 
    { 
        front = rear = 0; 
        queue [rear]=x; 
    }
    else 
    {
        rear ++;
        queue[rear] =x;
    }
}




void dequeue ()
{
    if  (rear == -1 && front == -1)
    {
        printf ("No Data In Q\n");
    }
    else if (rear==front)
    {
        printf ("The Data Removed From Queue Is: %d\n", queue[rear]);
        rear=front =-1;
    }
    else 
    {
        printf ("The Data Removed From Queue Is: %d\n", queue[front]);
        front++;
    }
}





void display()
{
    if  (rear == -1 && front == -1)
    {
        printf ("No Data In Queue\n");
    }
    else 
    {
        for (int y=front; y<=rear;y++)
        {
            printf ("%d\n", queue[y]);

        } 
        
    }
}



void peek ()
{
    if  (rear == -1 && front == -1)
    {
        printf ("No Data In Queue\n");
    }
    
    else 
    {
        printf ("The Element In The Front Is: %d\n", queue[front]);
    }
    
}
