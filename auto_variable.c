//default value garbage
//local variable only access for within block
//life end of block
//data stored in stack segment

#include<stdio.h>

/*int main()
{
    auto int i=10; // or int i=0; two are same
    int i=20;
    printf("%d",i);
}*/
int main()
{
    int i=10;
    {
        int i=20;
        printf("i value is :%d\n",i);
    }
    printf("i value is :%d",i);
}
