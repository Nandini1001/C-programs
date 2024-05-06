#include<stdio.h>
void main()
{
    int n,it,rt,i;
    scanf("%d",&n);
    struct complex
    {
        int r,im;
    }c[n];
    it=rt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&c[i].r,&c[i].im);
        it=it+c[i].im;
        rt=rt+c[i].r;
    }
    printf("%d+%di",rt,it);
}
