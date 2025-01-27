//its gloabal variable & constant
//print the minimum and maximum size of datatype
//print only integer type

#include<stdio.h>
#include<limits.h>

int main()
{
    //signed

    printf("int minimum:%d\n",INT_MIN);
    printf("int maximum:%d\n",INT_MAX);
    printf("char minimum:%d\n",CHAR_MIN);
    printf("char maximum:%d\n",CHAR_MAX);
    printf("long minimum:%ld\n",LONG_MIN); //use ld
    printf("long maximum:%ld\n",LONG_MAX);

    //unsigned   add in U

    printf("int minimum:%d\n",UINT_MIN);
    printf("int maximum:%d\n",UINT_MAX);
    printf("char minimum:%d\n",UCHAR_MIN);
    printf("char maximum:%d\n",UCHAR_MAX);
    printf("long minimum:%\nlu",ULONG_MIN); //use lu only unsigned
    printf("long maximum:%\nlu",ULONG_MAX);
}
