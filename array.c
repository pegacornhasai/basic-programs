#include<stdio.h>
int main()
{
    int i,n,a[10],f1=1,f2=2;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the number\n");
        scanf("%d",&a[i]);





    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])f1=0;
        if(a[1]>a[i+1])f2=0;



    }
    switch(f1+f2)
    {
        case 0:printf("disorder");break;
        case 1:printf("descending order");break;
        case 2:printf("ascending order");break;
        case 3:printf("all are same");break;



    }
    return(0);
    
}












































































