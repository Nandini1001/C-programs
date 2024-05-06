#include<stdio.h>
void main()
{
    int n,*p,m=0,i,j,k,l=0;
    scanf("%d",&n);
    p=(int*)(malloc(n*sizeof(int)));
    if(p==NULL)
    {
        printf("not allocated");
    }
    else
    {
            for(i=0;i<n;i++)
                scanf("%d",(p+i));
            for(i=0;i<n;i++)
            {
                if(i%7==0)
                    m++;
            }
            scanf("%d",&k);
            if(m!=0)
            {
            p=(int*)(realloc(p,(n+m)*sizeof(int)));
            if(p==NULL)
            printf("not allocated");
            else
            {
            for(i=0;i<n;i++)
            {
                if(i%7==0)
                {
                    l++;
                    for(j=n+i;j>=i;j--)
                        *(p+j)=*(p+j-1);
                    *(p+i)=k;
                }

            }
            for(i=0;i<n+m;i++)
                printf("%d ",*(p+i));
            }
            }
    }
}


