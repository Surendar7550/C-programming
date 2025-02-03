//bitwise operator
//first value are convert to binary and perform the operations

/*#include<stdio.h>

int main()
{
    int a=5,b=4;

    printf("bitwise and :%d\n",a&b);
    printf("bitwise or :%d\n",a|b);
    printf("bitwise not :%d\n",~a);

    int x=5,y=2;
    printf("left shift :%d\n",x<<y);

    printf("right shift :%d\n",x>>y);

}*/


#include<stdio.h>
//bitwise not ->1's complement ,2'complement
//integer also 2'complement
int main()
{
    int a=5,b=-5;

    printf("bitwise not 1's compliment :%d\n",~a); // 1's compelement
    printf("bitwise not 1's compliment :%d\n",~b); // 1's compelement
    //1's complement +1
    printf("bitwise not 2's compliment :%d\n",~a+1); // 2's complement
    printf("bitwise not 2's compliment :%d",~b+1);   // 2's complement
}
