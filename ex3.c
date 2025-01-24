#include<stdio.h>
int main()
{
    int x=25;
    int y=++x;
    printf("%d",y);
    if(x==y)
    {
        printf("dark");
    }
    else
    {
        printf("night");
    }
}
