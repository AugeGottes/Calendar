#include<stdio.h>
#include<stdlib.h>


void day_calc(int dd, int mm, int yyyy)
{
    mm-=2;

    if (mm<=0)
    yyyy-=1;

    if (mm==-1)
    mm=11;

    else if(mm==0)
    mm=12;

    int c=yyyy/100;
    yyyy%=100;

    int f=dd + (((13*mm)-1)/5) + yyyy + (yyyy/4) + (c/4) - (2*c);

    if (f<0)
    {
        int x=f;
        while((f%7)!=0)
        {
            f--;
        }
        f=x-f;
    }

    else
    f%=7;

    if (f==0)
    printf("Sunday");

    else if (f==1)
    printf("Monday");

    else if (f==2)
    printf("Tuesday");

    else if (f==3)
    printf("Wednesday");

    else if (f==4)
    printf("Thursday");

    else if (f==5)
    printf("Friday");

    else if (f==6)
    printf("Saturday");
}


void my_cal(int m, int y)
{
    int dd;

    if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    dd=31;

    else if(m==4||m==6||m==9||m==11)
    dd=30;

    else
    {
        if ((y%4==0)&&(y%100!=0)||(y%400==0))
        dd=29;
        
        else
        dd=28;
    }

    int x=1;

    while(x<=dd)
    {
        printf("%d - %d - %d is on: ", x,m,y);
        day_calc(x,m,y);
        printf("\n");
        x++;
    }
}
