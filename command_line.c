#include<stdio.h>
#include<stdlib.h>

int main(int argc,char*argv[])
{
    int a;
    printf("helloworld\n");
    printf("%d\n",argc);  //arg counter program name is algo 1 argument
    printf("%s\n",argv[0]); //arg vector
    printf("%s\n",argv[1]);
    printf("%s\n",argv[2]);
    a=atoi(argv[0]);
    printf("%d\n",a);

}
