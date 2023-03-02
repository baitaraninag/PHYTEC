#include<stdio.h>
int phy(int x)
{
    if(x<=33)
    {
        printf("FAIL");
    }
    else if(x>=34 && x<=50)
    {
        printf("E");
    }
    else if(x>=51 && x<=60)
    {
        printf("D");
    }
    else if(x>=61 && x<=70)
    {
        printf("C");
    }
    else if(x>=71 && x<=80)
    {
        printf("B");
    }
    else if(x>=81 && x<=90)
    {
        printf("A");
    }
    else if(x>=91 && x<=100)
    {
        printf("O");
    }
    else
    {
     printf("invalid entry!\n");
    }
    return 0;
}