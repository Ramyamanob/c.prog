# c.prog
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("number is positive");
    }
    else if(n<0)
    {
        printf("number is negative");
    }
    else
    {
        printf("zero");
    }
    return 0;
}
