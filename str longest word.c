#include<stdio.h>
void main()
{
    char a[100];
    int i,c=0,j,k=0,l=0;
    gets(a);
    if(a[0]!=32)
    {
        for(i=0;a[i]!=32;i++)
            c++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        k=0;
        if(a[i]==32&&a[i+1]!=32&&a[i+1]!=0)
        {
            for(j=i+1;a[j]!=' '&&a[j]!=0;j++)
                k++;
        }
        if(c<k)
        {
            c=k;
            l=j-k;
        }
    }
    for(i=l;a[i]!=32&&a[i]!=0;i++)
        printf("%c",a[i]);
}
