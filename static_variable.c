#include<stdio.h>
void fun();
int main()
{
    fun();
    fun();
    fun();
}
void fun()
{
    // int a=10; normal method print 11,11,11
    static int a=10; //print in 11,12,13
    ++a;
    printf("%d\n",a);
}
