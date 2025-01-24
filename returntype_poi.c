//any change to fuction call variable is reflect to main function.ex
#include<stdio.h>
//returntype * fun_name(data_type * variable)

int * my_fun(int *a)
{
    printf("inside value of a:%d\n",*a);
    *a =20;//value change for function call
    return a;
}
int main()
{
   int a=10; //a value 10
   int *ptr;
   ptr =&a;
    printf("befote change value :%d\n",a);
    ptr = my_fun(&a);
    printf("after chane value:%d\n",a);//reflect for value change
    printf("the value of ptr is :%d",*ptr);
}
