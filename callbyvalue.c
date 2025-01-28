// i change any value in  function call is not refelect in main function
//call by value
/*#include<stdio.h>
int swap(int ,int);

int main()
{
    int a=10,b=20;
    printf("BEFORE SWAP IN MAIN FUN A=%d B=%d\n",a,b);
    swap(a,b);
    printf("AFTER SWAP IN MAIN FUN A=%d B=%d\n",a,b); //value are not change
}
int swap(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("AFTER SWAP IN FUN CALL x=%d y=%d\n",x,y);
}*/

// i change any value in  function call is refelect in main function
//call by reference
//using pointer to pass the address
#include<stdio.h>
int swap(int *,int *);

int main()
{
    int a=10,b=20;
    printf("BEFORE SWAP IN MAIN FUN A=%d B=%d\n",a,b);
    swap(&a,&b);  //pass to address
    printf("AFTER SWAP IN MAIN FUN A=%d B=%d\n",a,b); //value are changed
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("AFTER SWAP IN FUN CALL x=%d y=%d\n",*x,*y);
}
