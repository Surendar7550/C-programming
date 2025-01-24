#include<stdio.h>
int main()
{
    int arr[4][3] ={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    printf("%p\n",arr);
    printf("%p\n",&arr+1);
    printf("%p\n",arr+1);
    printf("%p\n",*arr);
    printf("%p\n",*arr+1);
    printf("%d\n",**arr);
    printf("%d\n",**arr+20);
    printf("%d\n",*(*arr));
    printf("%d\n",*(*arr+1));
    printf("%d\n",*(*arr+2));
    printf("%d\n",*(*(arr+1)+0));
    printf("%d\n",*(*(arr+1)+1));
    printf("%d\n",*(*(arr+1)+2));
    printf("%d\n",*(*(arr+2)+0));
    printf("%d\n",*(*(arr+2)+1));
    printf("%d\n",*(*(arr+2)+2));
    printf("%d\n",*(*(arr+3)+0));
    printf("%d\n",*(*(arr+3)+1));
    printf("%d\n",*(*(arr+3)+2));
}
