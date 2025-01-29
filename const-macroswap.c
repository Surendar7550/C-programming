/*#include<stdio.h>
#define swap(a,b) a=a+b; \
                   b=a-b; \
                   a=a-b;

int main()
{
    int a=2,b=3;
    swap(a,b);
    printf("a=%d b=%d",a,b);
}*/
#include<stdio.h>
#define swap(a,b,temp) temp=a; \
                        a=b; \
                        b=temp;

int main()
{
    int a=2,b=3,temp;
    swap(a,b,temp);
    printf("a=%d b=%d",a,b);
}

