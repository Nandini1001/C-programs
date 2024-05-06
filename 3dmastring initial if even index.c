#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    char *p;
    scanf("%d",&n);
    p=(char*)(calloc((n+1),sizeof(char)));
    if(p==NULL)
    {
        printf("no");
    }
    else
    {
        fflush(stdin);
        gets(p);
        if(*p!=' ')
        printf("%c",*p);
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)==' '&&*(p+i+1)!=' '&&(i+1)%2==0)
            printf("%c ",*(p+i+1));
    }
    }
    free(p);
}
