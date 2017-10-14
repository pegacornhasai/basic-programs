#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++)
    {
        k=i>n?(n-i%n):i;
        for(j=0;j<=n-k;j++)
        printf(" ");
        printf("1");
        if(k!=1)
        {
            for(j=0;j<2*k-3;j++)
            
            printf(" ");
            printf("1");
        
            

        
        }
        printf("\n");


    }

    return(0);


}