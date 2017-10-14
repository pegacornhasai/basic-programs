#include<stdio.h>
int main()
{
    int i,p;
    for(i=0;;i++)
    {
        scanf("%d",&p);
        if(p==42)
            break;
        else
            printf("%d\n",p);
    }
    return(0);
}