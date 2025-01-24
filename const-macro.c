/*#include<stdio.h>
#define pi 3.13465674 //avoid semicolon
//pi also called macro value

int main()
{
    //int pi = 20;
    printf("%.5f",pi);
}*/


#include<stdio.h>
#define add(a,b)a+b

int main()
{
    printf("addition %d",add(4,3));
}
