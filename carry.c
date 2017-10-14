#include<stdio.h>
#include<string.h>
int main()
{
    int a[10][10],n,i,j,s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
      {
        printf("enter the elements of matrix\n");
        scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<n;i++)
    {
        s1+=a[i][j];
        s2+=a[i][n-i-1];


    }
    printf("the sum is%d\nthe sum is%d",s1,s2);
    return(0);











}