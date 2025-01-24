#include<stdio.h>
int main()
{

    int arr[10]={1,2,3,4,5,6};
    int *ptr=&arr;
    printf("%p\n",ptr);
    printf("%p\n",++ptr);
    printf("%p\n",--ptr);
    printf("%d\n",*(ptr+1));
    printf("%p\n",(ptr+3));
     printf("%p\n",&arr);
      printf("%p\n",&arr+1);
}
