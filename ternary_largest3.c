#include<stdio.h>

int main()
{
    int x,y,z;
    x=10;
    y=8;
    z=15;
    (x>=y && x>=z) ? printf(" x greater :%d",x):
    (y>=x && y>=z)? printf(" y is greater:%d",y):
    printf("z is greater:%d",z);
}
