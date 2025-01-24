#include<stdio.h>
/*int main()
{
    int *p=NULL;
    printf("%d",sizeof(p));
}*/
//value assing for void pointer
int main()
{
    int i=2;
    void *p=&i;
    printf("%d",*(int *)p);//*(int*) void convert to int
}
