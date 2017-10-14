#include<stdio.h>
int main()
{
    int m,n,l;
    printf("enter the two numbers\n");
    scanf("%d%d",&n,&m);
    l=n%m;
    printf("it is %d\n",l);
    return(0);
}