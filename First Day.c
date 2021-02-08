#include<stdio.h>
int main()
{
    int d,m,i=1,n;
    scanf("%d %d",&d,&m);
    switch(m)
    {
        case 1 :
        case 3 :
        case 5 :
        case 7 :
        case 8 :
        case 10 :
        case 12 : n = 31;
                  break;
        case 2 : n = 28;
                 break;
        case 4 :
        case 6 :
        case 9 :
        case 11 : n = 30;
                  break;
    }
    while(i < n)
    {
        i+=7;
    }
    i-=7;
    for(i;i<=n;i++)
    {
        d+=1;
    }
    if(d>7)
        d-=7;
    printf("%d",d);
    return 0;
}
