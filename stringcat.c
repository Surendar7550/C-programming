#include<stdio.h>
#include<string.h>

int main()
{

    char s1[20]="hello";
    char s2[20]="surendar";
    printf("after con:%s\n",s1);
    strcat(s1,s2);
    printf("after con:%s",s1);
}
