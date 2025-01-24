#include<stdio.h>
void myfun(char namer[],int age,float mark);
int main()
{
    struct surendar
    {
        char name[20];
        int age;
        float mark;
    };
    struct surendar s1={"MYPROGRAM",17,45.7};
    myfun(s1.name,s1.age,s1.mark);
    return 0;

}
void myfun(char name[],int age,float mark)
{
    printf("%s\n",name);
    printf("%d\n",age);
    printf("%0.2f",mark);
}
