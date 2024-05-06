#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p,n,i,t,min,max,mii,mai;
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
            scanf("%d",(p+i));
        }

             min=max=*(p);
        for(i=0;i<n;i++)
        {
            if(*(p+i)<min)
            {
                min=*(p+i);
                mii=i;
            }
            if(*(p+i)>max)
            {
                 max=*(p+i);
                 mai=i;
            }
        }
        t=*(p+mai);
        *(p+mai)=*(p+mii);
        *(p+mii)=t;
        for(i=0;i<n;i++)
        {
            printf("%d ",*(p+i));
        }
    }
    free(p);
}
