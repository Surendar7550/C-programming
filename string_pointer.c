#include<stdio.h>
char* change(char * a)
{
for(int i=0;i<5;i++)
{
    printf("%c ",*(a+i));
}
*(a+3)='p';
printf("\n");
return a;
}
int main()
{
    char str[6]={'h','e','l','l','o','\0'};
    for(int i=0;i<5;i++)
    {
        printf("%c\n",*(str+i));
    }
    /*printf("%s\n",str);
        printf("%s\n",str+2);*/
         char *ptr =change(str);
         printf("%s",ptr);
}
