#include<stdio.h>
#define largest(x,y,z) if(x>=y && x>=z) \
                    printf("x is greater then :%d",x); \
                    else if(y>=x && y>=z)\
                        printf("y is greater then :%d",y); \
                        else\
                        printf("z is greater then:%d",z);

                    int main()
                    {
                        largest(10,18,5);
                    }
