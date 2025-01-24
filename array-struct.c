#include<stdio.h>
struct student
{
    char name[50];
    int age;
    int rollno;
};
int main()
{
    struct student s[5]={{"surya",22,11},{"surendar",23,10},{"arun",24,12},{"sanjeevi",22,13},{"mafu",23,15}};
    /*for(int i=0;i<50;i++)
    {
        scanf("%s %d %d",&s[0].name,&s[0].age,&s[0].rollno);
    }*/

    for(int i=0;i<5;i++)
    {
        printf("name:%s age:%d rollno:%d\n",s[i].name,s[i].age,s[i].rollno);
    }
    printf("\n");
}
