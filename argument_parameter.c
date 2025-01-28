#include<stdio.h>

/*int add(int,int);//function prototype or declaration

int main()
{
    printf("THE ADDITION IS :%d",add(7,8)); //value are argument
}

int add(int a,int b) //int a,int b parameter
{
    int c=a+b;
    return c;

}*/

int swap(int *a,int *b);

int main()
{
    int a=5,b=7;
    swap(&a,&b);
    printf("THE swap method is A=%d B=%d",a,b);
}

int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
   // return a,b;
}
