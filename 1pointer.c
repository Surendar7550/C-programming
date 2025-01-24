#include<stdio.h>
int main()
{

    int a=10;
    int *ptr;
    ptr=&a;
    int *ptr1;
    ptr1 = &ptr;
    printf("%p\n",&a);
    printf("%x\n",&a);
    printf("%d\n",**ptr1);
    printf("%x\n",&ptr);
    printf("%p\n",&ptr);

}
