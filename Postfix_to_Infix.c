#include<stdio.h>
int main()
{
    char str[100],oprator[100],operant[100];
    int i,opr=-1,op=-1;
    printf("Enter the String : ");
    scanf("%s",str);

    for (i=0; str[i]!=NULL; i++)
    {
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='^'||str[i]=='/')
        {
            (opr)++;
            oprator[opr]=str[i];
        }
        else
        {
            (op)++;
            operant[op]=str[i];
        }

    }
    printf("Operators are : \n");
    for (i=0; i<=opr; i++)
        printf("%c",oprator[i]);
    printf("\nOperandas are : \n");
    for (i=0; i<=op; i++)
        printf("%c",operant[i]);
    return 0;
}
