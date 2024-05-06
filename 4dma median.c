#include<stdio.h>
#include<stdlib.h>
void median(int*,int);
void main()
{
    int n,i,j,t;
    int *p;
    scanf("%d",&n);
    p=(int *)(malloc((n+1)*sizeof(int)));
    median(p,n);
}
void median(int *p,int n)
{
    int i,j,t;
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
        for(j=0;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
        if(n%2!=0)
printf("Median is %d",*(p+n/2));
else
printf("Median is %f",(*(p+n/2-1)+*(p+n/2))/2.0);


    free(p);}
}

