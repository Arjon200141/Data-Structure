#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char Name[20],Grade[1];
    int roll,marks;
} s[];
int main()
{
    int i,n,t,tmp;
    char st[20];
    printf("Enter information of N students : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter Roll Number:");
        scanf("%d",&s[i].roll);
        printf("Enter Name for Roll %d:",s[i].roll);
        scanf("%s",& s[i].Name);
        printf("Enter Marks for Roll %d:",s[i].roll);;
        scanf("%d", &s[i].marks);
        printf("\n");
        if(s[i].marks>=80&&s[i].marks<=100) strcpy(s[i].Grade,"A+");
        else if(s[i].marks<80 && s[i].marks>=75) strcpy(s[i].Grade,"A");
        else if(s[i].marks<75 && s[i].marks>=70) strcpy(s[i].Grade,"A-");
        else if(s[i].marks<70 && s[i].marks>=65) strcpy(s[i].Grade,"B+");
        else if(s[i].marks<65 && s[i].marks>=60) strcpy(s[i].Grade,"B");
        else if(s[i].marks<60 && s[i].marks>=55) strcpy(s[i].Grade,"B-");
        else if(s[i].marks<55 && s[i].marks>=50) strcpy(s[i].Grade,"C+");
        else if(s[i].marks<50 && s[i].marks>=45) strcpy(s[i].Grade,"C");
        else if(s[i].marks<45 && s[i].marks>=40) strcpy(s[i].Grade,"D");
        else if(s[i].marks<40) strcpy(s[i].Grade,"F");
    }
    for (i = 1 ; i <n; i++)
    {
        for(; (i> 0 && s[i-1].marks < s[i].marks); i--)
        {
            t = s[i].marks;
            s[i].marks = s[i-1].marks;
            s[i-1].marks = t;
            tmp = s[i].roll;
            s[i].roll = s[i-1].roll;
            s[i-1].roll = tmp;
            strcpy(st,s[i].Name) ;
            strcpy(s[i].Name,s[i-1].Name);
            strcpy(s[i-1].Name,st);
            strcpy(st,s[i].Grade) ;
            strcpy(s[i].Grade,s[i-1].Grade);
            strcpy(s[i-1].Grade,st);
        }
    }
    system("cls");
    printf("After Sorting In Ascending Order:\n");
    printf(" ROLL\t\t NAME \t\t MARK \t\t GRADE \n");
    for (i = 0; i < n; i++)
    {
        printf(" %d\t\t %s \t\t %d \t\t %s \n",s[i].roll,s[i].Name,s[i].marks,s[i].Grade);
    }
    return 0;
}
