#include<stdio.h>
struct time
{
     int hr,min,sec,s;
};
void addtime(struct time[]);
void main()
{
    int i;
    struct time t[2];
    for(i=0;i<2;i++)
    {
        scanf("%d%d%d",&t[i].hr,&t[i].min,&t[i].sec);
        t[i].s=(t[i].hr*3600)+(t[i].min*60)+t[i].sec;
    }
    addtime(t);
}
void addtime(struct time t[2])
{
    int i,h,m,sec1;
    sec1=t[1].s+t[0].s;
    h=sec1/3600;
    sec1=sec1%3600;
    m=sec1/60;
    sec1=sec1%60;
    printf("%dhr %dmin %dsec",h,m,sec1);
}
