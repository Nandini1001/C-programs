#include<stdio.h>
void main()
{
    char a[100];
    int i,k=0,j;
    gets(a);
    if(a[0]!=32)
    {
        for(i=0;a[i]!=32&&a[i]!=0;i++);
            printf("%d",i);
    }
    for(i=0;a[i]!=0;i++)
    {
        k=0;
        if(a[i]==32&&a[i+1]!=32&&a[i+1]!=0)
        {
            for(j=i+1;a[j]!=32&&a[j]!=0;j++)
                k++;
            printf(" %d",k);
        }
    }
}
