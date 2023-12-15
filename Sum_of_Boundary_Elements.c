#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main()
{
    int r,c,sum=0;
    printf("Number of Row and Columns : \n");
    scanf("%d%d",&r,&c);
    int Arr[r][c],i,j;
    srand(time(0));
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            Arr[i][j]=rand()%100;
        }
    }
    printf(" Matrix : \t\n");
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("\t%d\t",Arr[i][j]);
        }
        printf("\n");
    }
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i==1 || j==1 || i==r || j==c)
            {
                sum=sum + Arr[i][j];
            }
        }
    }
    printf("\nSum of the Boundary Elements of the Matrix = %d\n",sum);
    return 0;
}
