#include<stdio.h>
#include<stdlib.h>
int main()
{
    void *i;
    int a=12;
    i=&a;
    printf("%d",*(int *)i);
}
