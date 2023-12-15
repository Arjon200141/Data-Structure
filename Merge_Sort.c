#include<stdio.h>
void mergesort(int a[],int i,int j);
void merge(int a[],int l,int m,int x,int y);

int main()
{
    int a[30],n,i;
    printf("Enter Number of Elements : ");
    scanf("%d",&n);
    printf("Enter Elements: ");

    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    printf("\nSorted array is : ");

    for(i=0; i<n; i++)
        printf("%d ",a[i]);
    return 0;
}

void mergesort(int a[],int i,int j)
{
    int mid;
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
    }
}

void merge(int a[],int l,int m,int x,int y)
{
    int temp[50];
    int i,j,k;
    i=l;
    j=x;
    k=0;
    while(i<=m && j<=y)
    {
        if(a[i]<a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    while(i<=m)
        temp[k++]=a[i++];
    while(j<=y)
        temp[k++]=a[j++];

    for(i=l,j=0; i<=y; i++,j++)
        a[i]=temp[j];
}
