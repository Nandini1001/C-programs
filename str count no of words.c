#include<stdio.h>
void main()
{
    char a[100];
    int i,k=0;
    gets(a);
    if(a[0]!=32)
        k++;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==32&&a[i+1]!=32&&a[i+1]!='\0')
            k++;
    }

    printf("No of words in a string is %d",k);
}
