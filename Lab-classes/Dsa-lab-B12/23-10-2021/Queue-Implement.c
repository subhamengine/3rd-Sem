#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],top;  // GLOBAL VARIABLE
void push(int x)
{
    if(top==MAX-1)
    {
        printf("stack is full\n");
        return;
    }
    top++;
    a[top]=x;
}
void pop()
{
    if(top==-1)
        printf("stack is empty. can't pop");
    else
    {
        printf("popped element is %d",a[top]);
        top--;
    }
}
void show()
{
   int i;
   if(top==-1)
   {
       printf("Empty stack. nothing to display");
       return;
   }
   printf("Element of the stack are  ");
   for(i=0;i<=top;i++)
    printf("%d ",a[i]);
}
void menu()
{
    printf("\n");
    printf("\t\t\t program on stack\n");
    printf("\t\t\t 1. push\n");
    printf("\t\t\t 2. pop\n");
    printf("\t\t\t 3. display\n");
    printf("\t\t\t 4. exit\n");
    printf("Enter your choice");
}
int main()
{
    int ch,m;
    top=-1;
    while(1)
    {
        menu();
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(top!=MAX-1)
            {
                printf("\nEnter the to push");
                scanf("%d",&m);
            }
            push(m);
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default :
            printf("\n invalid choice\n");
            break;
        } // end of switch
    }  // end of while loop
}
