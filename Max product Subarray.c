#include<stdio.h>
int main()
{
    int product[100];
    int i,j,t;
    int a[100];
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<=i;j++)
        {
            product[j]=a[i] * a[i+1];
            
        }
    }
    for(j=0;j<n-1;j++)
    {
        if(product[j]>product[j+1])
        {
            t=product[j];
            product[j]=product[j+1];
            product[j+1]=t;
        }
    }
    printf("%d",product[n-1]);
}
