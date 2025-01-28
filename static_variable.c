//default value 0
//data stored in data segment
//work within block of code in local variable
//global variable access to any function
//life end of program

/*#include<stdio.h>
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
}*/

#include<stdio.h>
void fun();
static i=10;
int main()
{
    //static i=20;
    printf("i= %d",i);
    fun();
    printf("\nfunction i= %d",i);
}
void fun()
{
    i=50;
}
