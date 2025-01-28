//default value garbage
//local variable only access for within block
//life end of block
//data stored in cpu register

#include<stdio.h>

int main()
{
    //register int a; print garbage value
    register int a=10;
    printf("%d",a);
}
