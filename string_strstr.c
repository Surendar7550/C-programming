//sub srt to find the value of main string

#include<stdio.h>
/*int main()
{
    char a[20]; //main str
    char b[20]; //sub str

    printf("ENTER THE STRING:");
    gets(a);
    printf("FIND THE STRING:");
    gets(b);
    printf("THE STRING IS :%s\n",strstr(a,b));
}*/

//pointer method
int main()
{
    char a[20]; //main str
    char b[20]; //sub str
    char *p;
    printf("ENTER THE STRING:");
    gets(a);
    printf("FIND THE STRING:");
    gets(b);
    p=strstr(a,b);
    if(p)
    printf("%s THE STRING IS FOUNDED, ADDRESS IS :%u\n",b,p);
    else
    printf("%s :THE STRING IS NOT FOUNDED\n",b);
}
