#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    int *p;
    scanf("%d",&n);
    p=(int *)(calloc((n+1),sizeof(int)));
    if(p==NULL)
    {
        printf("no");
    }
    else
    {
     for(i=0;i<n;i++)
        scanf("%d",(p+i));
    for(i=0;i<n;i++)
    {
        if(*(p+i)/10==0)
            printf("%d ",*(p+i));
    }

    }
    free(p);
}

