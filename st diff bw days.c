#include<stdio.h>
void main()
{
    int h,m,sec1,i,day1=0;
    typedef struct
    {
        int day,mon,yr,da;
    }days;
    days d[2];
    for(i=0;i<2;i++)
    {
        scanf("%d%d%d",&d[i].yr,&d[i].mon,&d[i].day);
        d[i].da=(d[i].yr*365)+(d[i].mon*30)+d[i].day;
    }

    printf("Difference in days is ");
    if(d[0].da>d[1].da)
         printf("%d",d[0].da-d[1].da);
    else
        printf("%d",d[1].da-d[0].da);
}
