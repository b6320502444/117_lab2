#include<stdio.h>

int main()
{
    int x,y;
    float n,sum=0;
    char i;
    scanf("%c",&i);
    scanf("%f",&n);
    x=n;
    y=n*100;
    y%=100;
    if(i == 'A')
    {
        sum+=199;
        if(n > 200)
        {
            x-=200;
            sum+=x*3;
            sum+=y*3/60.0;
        }
    }
    else if(i == 'B')
    {
        sum+=299;
        if(n > 400)
        {
            x-=400;
            sum+=x*2;
            sum+=y*2/60.0;
        }
    }
    printf("%.2f",sum);
    return 0;
}
