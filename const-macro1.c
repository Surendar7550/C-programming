/*#include<stdio.h>
#define grater(a,b) if(a>b)\
                        printf("a is greater :%d",a);\
                    else \
                        printf("b is greater :%d",b);


int main()
{
    grater (5,8);
}
*/
//predifind macro using print current date and time
#include<stdio.h>

int main()
{
    printf(" %s",__DATE__);
    printf(" %s",__TIME__);
}
