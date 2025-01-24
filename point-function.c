#include<stdio.h>
void my_fun(int * a,int *b)
{
    printf("%d",*a);
    b=++b;
     printf("%d",*b);
}
int main()
{
    int a=10;
    int b=10;
    my_fun(&a,&b);
}
