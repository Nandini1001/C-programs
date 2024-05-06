#include<stdio.h>
void main()
{
    int n,i,cost=0,day;
    printf("\t*****INPUT*****\n");
    printf("Enter number of cars: ");
    scanf("%d",&n);
    struct car
    {
        int id,rate;
        char m[50];
    }c[n];
    for(i=0;i<n;i++)
    {
        printf("Enter car ID of car %d: ",i+1);
        scanf("%d",&c[i].id);
        printf("Enter rental rate per day of car %d: ",i+1);
        scanf("%d",&c[i].rate);
        printf("Enter model of car %d: ",i+1);
        getchar();
        gets(c[i].m);
    }
    printf("Enter number of days: ");
    scanf("%d",&day);
    printf("\t*****OUTPUT*****");
    for(i=0;i<n;i++)
    {
        cost=0;
        cost=cost+(c[i].rate*day);
        printf("\nTotal rental cost for car %d is %d:",i+1,cost);
    }
}

