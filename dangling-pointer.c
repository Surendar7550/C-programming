#include<stdio.h>
#include<stdlib.h>
int main()
{

    int *p=(int *)malloc(sizeof(int));
    int i=2;
    printf("the address of p:%p\n",&p);
    p=&i;
    printf("the value of p:%d\n",*p);
    //free(p);
    //*p=NULL;
    //printf("the value of p:%d",*p);
    int my=5;
    p =&my;
    printf("the value of p:%d",*p);
    free(p);
    *p=NULL;
    printf("the value of p:%d",*p);
}
