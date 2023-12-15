#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
    int a[size],R=-1,F=0,te=0,ch,n,i,x;

    for(;;)
    {
        system("cls");
        printf("1. Add Element\n");
        printf("2. Delete Elemenet\n");
        printf("3. Display Queue\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                if(te==size)
                {
                    printf("Queue is full");
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    R=(R+1)%size;
                    a[R]=n;
                    te=te+1;
                }
                break;

            case 2:
                if(te==0)
                {
                    printf("Queue is empty");
                }
                else
                {
                    printf("Number Deleted = %d",a[F]);
                    F=(F+1)%size;
                    te=te-1;
                }
                break;

            case 3:
                if(te==0)
                {
                    printf("Queue is empty");
                }
                else
                {
                    x=F;
                    for(i=1; i<=te; i++)
                    {
                        printf("%d ",a[x]);
                        x=(x+1)%size;
                    }
                }
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Wrong Choice!!!");
        }
    }
    return 0;
}
