#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i,j,fact=1;
    scanf("%d",&n);
    p=(int *)(malloc(n*sizeof(int)));
    if(p==NULL)
    {
        printf("no");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            fact =1;
            scanf("%d",(p+i));
            for(j=2;j<=*(p+i);j++)
            {
                fact=fact*j;
            }
            *(p+i)=fact;
        }
        for(i=0;i<n;i++)
            printf("%d ",*(p+i));
    }
    free(p);
}
