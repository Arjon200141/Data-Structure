#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100];
    int element,i,loc,size,n,j,choice;
    printf("1. Inserting an Element \n");
    printf("2. Deleting an Element \n");
    printf("Select your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter size of an array : ");
        scanf("%d",&size);
        printf("Enter array elements : \n");
        for(i=0; i<size; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("List before Insertion: ");
        for(i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\nEnter an element to insert : ");
        scanf("%d",&element);
        printf("Enter the position to insert element : %d\n",element);
        scanf("%d",&loc);
        loc--;
        for(i=size-1; i>=loc; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[loc]=element;
        printf("List after Insertion: ");
        for(i=0; i<size+1; i++)
        {
            printf("%d ",arr[i]);
        }
        break;
    case 2:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0; i<size; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("List before deletion : \n");
        for(i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\nEnter an element to delete : ");
        scanf("%d",&n);
        for(i=0; i<size; i++)
        {
            if(arr[i]==n)
            {
                for(j=i; j<(size-1); j++)
                {
                    arr[j]=arr[j+1];
                }
                break;
            }
        }
        printf("List after deletion : \n");
        for(i=0; i<(size-1); i++)
        {
            printf("%d ",arr[i]);
        }
        break;
    default:
        printf("Wrong choice!!!");
    }
    return 0;
}
