#include<stdio.h>
#include<stdlib.h>
#define Size 100
int Top=0,i, st[Size];
int main()
{
    while(1)
    {
        int choice;
        printf("STACK IS EMPTY\n");
        printf("\nOperations performed by Stack");
        printf("\n1.Push the element\n2.Pop the element\n3.Dsplay\n4.End");
        printf("\n\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Push();
            sleep(3);
            system("cls");
            break;
        case 2:
            Pop();
            sleep(3);
            system("cls");
            break;
        case 3:
            show();
            sleep(3);
            system("cls");
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid choice!!");
        }
    }
}
void Push()
{
    int x;
    if(Top==Size)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter element to be inserted : ");
        scanf("%d",&x);
        Top= Top+1;
        st[Top]=x;
    }
}
void Pop()
{
    if(Top==0)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d",st[Top]);
        Top=Top-1;
    }
}
void show()
{
    if(Top==0)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack : \n");
        for(int i=Top; i>0; i--)
            printf("%d\n",st[i]);
    }
}
