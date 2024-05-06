#include<stdio.h>
void main()
{
    int n,*p,m=0,i,j,k;
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
            scanf("%d",&k);
            for(i=0;i<n;i++)
            {
                if(*(p+i)==k)
                {
                    for(j=i;j<n;j++)
                        *(p+j)=*(p+j+1);
                    m++;
                }

            }
        p=(int*)(realloc(p,(n-m)*sizeof(int)));
        if(p==NULL)
            printf("not allocated");
        else
        {

                for(i=0;i<n-m;i++)
                    printf("%d",*(p+i));

        }
        free(p);
    }
}

