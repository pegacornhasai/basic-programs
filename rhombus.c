#include<stdio.h>
#include<string.h>
int main()
{
    char x[80];
    int i,j,k,n,l=0;
    printf("enter a string\n");
    scanf("%s",x);
    n=strlen(x);
    for(i=1;i<=2*n-1;i++)
    {
        k=i>n?(n-i%n):i;
        for(j=0;j<n-k;j++)printf(" ");
        for(j=0;j<k;j++)printf("%c",x[j]);
        for(j=k-2;j>=0;j--)printf("%c",x[j]);
        
       printf("\n");
        
     }
    return(0);
}