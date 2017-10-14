#include<stdio.h>
#include<string.h>
int main()
{
    char x[20];
    int i,j,k,l=0,n;
    printf("enter the name");
    scanf("%s",x);
    n=strlen(x);
    for(i=1;i<=2*n-1;i++)
    {
        k=i>n?(n-i%n):i;
        for(j=0;j<n-k;j++)
        {
            printf(" ");
            printf("%c",x[l++%n]);



        }
           if(k!=1)
           {
               for(j=0;j<=2*k-3;j++)
               {
                   printf(" ");
                   printf("%c",x[l++%n]);
                   printf("\n");




               }





           }
           return(0);





    }




























}