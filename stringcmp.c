#include<stdio.h>
#include<string.h>


int main(){
    int value;
    char s1[20]="goodmorning";
    char s2[20]="Goodmorning";
    value =strcmp(s1,s2);
     printf("the value of:%d\n",value);
    if(value==0)
    {
        printf("string are same\n");
        printf("the value of:%d",value);
    }
    else
    {
        printf("string are not same\n");
        printf("the value of:%d",value);
    }
    return 0;
    }
