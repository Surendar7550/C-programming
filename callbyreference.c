//any change to fuction call variable is reflect to main function.ex
#include<stdio.h>
//returntype fun_name(data_type * variable)
void my_fun(int *a)
{
    printf("inside value of a:%d\n",*a);
    *a =20; //value change for function call
}
int main()
{
   int a=10; //a value 10
    printf("befote change value :%d\n",a);
    my_fun(&a);
    printf("after chane value:%d\n",a);//reflect for value change
}
